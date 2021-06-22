import random

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        for i in range(length):
            addend = target - nums[i]
            if addend in nums and i != nums.index(addend):
                return sorted([i, nums.index(addend)])
            