class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(int i = 0; i < strs.size(); i++){
            enc += to_string(strs[i].length());
            enc += '#';
            enc += strs[i];
        }

        return enc;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string a;
        int k = 0;
        
        for(int i = 0; i < s.length(); i++){
            int len = 0;
            while(s[k] != '#'){
                len = len * 10 + (s[k] - '0');
                k++;
            }
            i = k + 1;
            int j;
            for(j = i; j <= i + len - 1; j++){
                    a += s[j];
            }
            
            res.push_back(a);
            a.clear();
            i = j;
            k = j;
        }


        return res;
    }
};