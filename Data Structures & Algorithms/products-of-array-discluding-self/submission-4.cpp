class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size() == 1){
            return {};
        }
        
        vector<int> output;

        for(int i = 0; i < nums.size(); i++){
            int op = 1;
            if(i > 0){
                int j = i - 1;
                while(j != -1){
                    op = op * nums[j];
                    j--;
                }
            }

            for(int k = i + 1; k < nums.size(); k++){
                op = op * nums[k];
            }

            output.push_back(op);
        }
        
        return output;
    }
};
