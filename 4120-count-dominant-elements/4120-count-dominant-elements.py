class Solution:
    def countDominantElements(self, nums: list[int]) -> int:
        count=0
        n = len(nums)
        if n == 1:
            return 1
        for i in range(n):
            if i==0 :
                current = nums[i+1]
            elif i==n-1 :
                current = nums[i-1]
            else :
                current = (nums[i-1]+nums[i+1])/2
            if(nums[i]>=current) :
                count+=1
        return count