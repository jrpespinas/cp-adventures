"""Kids With the Greatest Number of Candies"""

from typing import List


class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        candy_holder = []
        num_kids = len(candies)
        for i in range(num_kids):
            if (candies[i] + extraCandies) >= max(candies):
                candy_holder.append(True)
            else:
                candy_holder.append(False)
        return candy_holder
