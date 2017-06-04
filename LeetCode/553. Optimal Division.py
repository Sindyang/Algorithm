class Solution(object):
    def optimalDivision(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        if len(nums) == 1:
            return str(nums[0])
        elif len(nums) == 2:
            return str(nums[0])+'/'+str(nums[1])
        else:
            result=""
            for i in range(len(nums)-1):
                result += str(nums[i])+'/'
                if i == 0:
                    result += '('
            result += str(nums[len(nums)-1])+')'
            return result
               
                
