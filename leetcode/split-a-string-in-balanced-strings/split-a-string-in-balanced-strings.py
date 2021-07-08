class Solution:
    def balancedStringSplit(self, s: str) -> int:
        stack = []
        result = 0

        for c in s:
            if len(stack) == 0:
                stack.append(c)
                result += 1
            elif stack[-1] == c:
                stack.append(c)
            elif stack[-1] != c:
                stack.pop()

        return result

