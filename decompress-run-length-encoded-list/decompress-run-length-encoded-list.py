class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        decompression = []
        for i in range(0,len(nums),2):
            freq = nums[i]
            val = nums[i+1]
            decompression.extend([val] * freq)
        return decompression
            
        