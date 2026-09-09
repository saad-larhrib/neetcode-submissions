class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> dicts;
        map<char, int> dictt;

        if(s.length() == t.length()){
            for(int i = 0; i < s.length(); i++){
                dicts[s[i]]++;
                dictt[t[i]]++;
            }

            if(dicts == dictt){
                return true;
            } 
        }
        return false;
    }
};
