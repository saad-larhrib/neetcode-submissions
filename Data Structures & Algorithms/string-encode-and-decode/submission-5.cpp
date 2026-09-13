class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string enc;
        for(int i = 0; i < strs.size(); i++){
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
        int k = 0;
        
        while(k < s.length()){
            int len = 0;
            while(s[k] != '#'){
                len = len * 10 + (s[k] - '0');
                k++;
            }

            for(int j = k + 1; j <= k + len; j++){
                    a += s[j];
            }
            
            res.push_back(a);
            a.clear();
            k = k + len + 1;
        }


        return res;
    }
};