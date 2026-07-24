class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        arr=[]
        a=False
        for i in range(len(nums)):
            if nums[i] not in(arr):
                arr.append(nums[i])         
            else:
                a= True
                break
        if a==True:
            return True
        else:
            return False


