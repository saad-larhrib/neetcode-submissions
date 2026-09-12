class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(const auto& c : strs){
            string k = c;
            sort(k.begin(), k.end());
            res[k].push_back(c);
        }

        vector<vector<string>> ret;
        for(const auto& c : res){
            ret.push_back(c.second);
        }

        return ret;
    }
};
