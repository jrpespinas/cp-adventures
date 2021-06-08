class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        num_length = len(nums)
        good_pairs = 0
        for i in range(num_length):
            for j in range(i, num_length):
                if (nums[i] == nums[j]) and (i < j):
                    good_pairs += 1
        return good_pairs
        