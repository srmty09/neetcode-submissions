class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        result = []

        def helper(index: int, arr: List[int]):
            result.append(arr[:])  

            for i in range(index, len(nums)):
                if i > index and nums[i] == nums[i - 1]:
                    continue
                arr.append(nums[i])
                helper(i + 1, arr)
                arr.pop()

        helper(0, [])
        return result