class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        sum_of_digits = 0
        for i in str(n):
            product *= int(i)
            sum_of_digits += int(i)
        return product - sum_of_digits
