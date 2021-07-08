class Solution:
    def sortSentence(self, s: str) -> str:
        s = s.split()
        length = len(s)
        final = [""] * length
        order = []
        for i in range(length):
            order = int(s[i][-1]) - 1
            final[order] = s[i][:-1]
        return " ".join(final)
