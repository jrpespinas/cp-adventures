class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        output = start
        for i in range(1, n):
            output ^= start + (i * 2)
        return output
