class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i,n in enumerate(nums):
            bal = target - n
            if bal in seen:
                return [seen[bal], i]
            seen[n] = i