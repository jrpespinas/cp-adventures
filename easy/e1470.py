"""Shuffle the Array"""
from typing import List


class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        shuffled = []
        for i in range(n):
            shuffled.append(nums[i])
            shuffled.append(nums[n + i])
        return shuffled
