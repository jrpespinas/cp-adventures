class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        s_copy = list(s)
        for i in range(len(indices)):
            s_copy[indices[i]] = s[i]
        return "".join(s_copy)
            
            