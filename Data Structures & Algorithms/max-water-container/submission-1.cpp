class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.empty()) return 0;

        int max = 0;
        int left = 0;
        int right = heights.size() - 1;
        int sum;

        while(left < right){
            sum = min(heights[left], heights[right]) * (right - left);

            if(sum > max){
                max = sum;
            }

            if(heights[left] < heights[right]){
                left++;
            }
            
            else{
                right--;
            }
        }

        return max;
    }
};