import numpy as np

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        digits = [int(num) for num in str(n)]
        return np.prod(digits) - sum(digits)