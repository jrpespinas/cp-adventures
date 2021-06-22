class Solution:
    def sortSentence(self, s: str) -> str:
        sort_s = s.split(" ")
        test = []
        for w in sort_s:
            test.append(w[::-1])
        
        new = []
        sorted_s = sorted(test)
        for w in sorted_s:
            w = w[::-1]
            w = w[:-1]
            new.append(w)

        return " ".join(new)
        