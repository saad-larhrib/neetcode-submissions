class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        short left = 0;
        short right = numbers.size() - 1;
        short sum;

        while(left < right){
            sum = numbers[left] + numbers[right];

            if(sum == target){
                return {left + 1, right + 1};
            }

            if(sum < target){
                left++;
            }

            if(sum > target){
                right--;
            }
        }
        return {};
    }
};
