class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        cumulative_sum = 0
        sum_nums = []
        for i in range(len(nums)):
           cumulative_sum += nums[i]
           sum_nums.append(cumulative_sum)
        return sum_nums