class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        priority_queue<pair<int,int>,  vector<pair<int,int>>> maxHeap;
        for(const auto& e : freq){
            maxHeap.push({e.second, e.first});
        }

        vector<int> res;
        for(int i = k; i != 0; i--){
            int val = maxHeap.top().second;
            res.push_back(val);
            maxHeap.pop();
        }
        return res;
    }
};