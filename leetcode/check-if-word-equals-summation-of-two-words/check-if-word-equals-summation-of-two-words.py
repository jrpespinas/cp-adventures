class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        firstWord = int("".join([str(ord(i) - 97) for i in firstWord]))
        secondWord = int("".join([str(ord(i) - 97) for i in secondWord]))
        targetWord = int("".join([str(ord(i) - 97) for i in targetWord]))
        
        return targetWord == firstWord + secondWord