class Solution:
    def balancedStringSplit(self, s: str) -> int:
        char_set = list(set(s))
        sample = []
        count = 0
        for i in s:
            sample.append(i)
            if sample.count(char_set[0]) == sample.count(char_set[1]):
                count += 1
                sample.clear()
        return count 