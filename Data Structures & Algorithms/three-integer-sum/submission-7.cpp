class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.empty()) return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> s;

        for(int i = 0; i < nums.size(); i++){
            int left = i+1;
            int right = nums.size() - 1;

            if(i > 0 && nums[i] == nums[i - 1]) continue;
    
            while(left < right){
                int sum = nums[left] + nums[i] + nums[right];

                if(sum > 0){
                    right--;
                }

                if(sum < 0){
                    left++;
                }

                if(sum == 0){
                    s.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left - 1]){
                        left++;
                    }
                }
            }
        }
        return s;
    }
};
