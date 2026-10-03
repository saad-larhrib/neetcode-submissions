class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int len = s.length();
        
        if(len % 2 == 1){
            return false;
        }

       for(char& c : s){
        if(c == '{' || c == '(' || c == '['){
            stk.push(c);
        }else{
            if(stk.empty()){
                return false;
            }else{
                if((c == '}' && stk.top() == '{') ||
                   (c == ']' && stk.top() == '[') ||
                   (c == ')' && stk.top() == '(')){
                    stk.pop();
                    
                }else{
                    return false;
                }
                  
            }
        }
       
       }
        if(stk.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
