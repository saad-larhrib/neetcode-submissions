class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int len = s.length();
        
        if(len % 2 == 1){
            return false;
        }

        int  i = 0;
        while(i != len / 2){
            char tmp = s[i];
            stk.push(tmp);
            i++;
        }

        for(int j = i; j < len; j++){
            if(s[j] == ']' && stk.top() == '[' || 
               s[j] == ')' && stk.top() == '(' ||            
               s[j] == '}' && stk.top() == '{'){
                stk.pop();
            }
        }
        
        if(stk.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
