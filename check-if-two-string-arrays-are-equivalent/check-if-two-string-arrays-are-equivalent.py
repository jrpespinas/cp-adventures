class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        return "".join([string for string in word1]) == "".join([string for string in word2])