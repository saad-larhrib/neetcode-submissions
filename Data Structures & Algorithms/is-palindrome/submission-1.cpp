class Solution {
public:
    string to_lower(string s){
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
            return std::tolower(c);
        });
        return s;
    }

    bool isPalindrome(string s) {
        string lower = to_lower(s);
        string nor;
        string rev;
        stack<char> stk;

        for(int i = 0; i < lower.length(); i++){
            if(isalnum(lower[i])){
                nor += lower[i];
                stk.push(lower[i]);
            }
        }

        while(!stk.empty()){
            rev += stk.top();
            stk.pop();
        }
        
        if(rev == nor){
            return true;
        }

        return false;
    }
};
