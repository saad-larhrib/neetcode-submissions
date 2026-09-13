class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string enc;
        for(short i = 0; i < strs.size(); i++){
            enc += to_string(strs[i].length());
            enc += '#';
            enc += strs[i];
        }

        return enc;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};

        vector<string> res;
        string a;
        short k = 0;
        
        while(k < s.length()){
            short len = 0;
            while(s[k] != '#'){
                len = len * 10 + (s[k] - '0');
                k++;
            }

            for(short j = k + 1; j <= k + len; j++){
                    a += s[j];
            }
            
            res.push_back(a);
            a.clear();
            k = k + len + 1;
        }

        return res;
    }
};