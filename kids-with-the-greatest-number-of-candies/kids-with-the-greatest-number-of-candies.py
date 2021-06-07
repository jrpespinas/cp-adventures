class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_num_candies = max(candies)
        return [True if (i + extraCandies) >= max_num_candies else False for i in candies ]