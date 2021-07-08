# Solution
The idea is to **sort the list** and **use the sorted list for an index look-up**.
```
def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_nums = sorted(nums)
        larger_nums = []
        for num in nums:
            larger_nums.append(sorted_nums.index(num))
        return larger_nums
```

# Simple Explanation:

Sort `nums` and store the sorted list to `sorted_nums`. For example: 
```
nums = [8,1,2,2,3]
sorted_nums = sorted(nums)
# [1, 2, 2, 3, 8]
```


Iterate through `nums`, and search the index of `num` from `sorted_list`. 

The index of `num` indicates how many numbers are smaller than itself.

For example on the **first iteration**:
```
# nums = [8,1,2,2,3]
for num in nums:
	# num = 8
	sorted_nums.index(num) # 4
```

**second iteration**:
```
# nums = [8,1,2,2,3]
for num in nums:
	# num = 1
	sorted_nums.index(num) # 0
```