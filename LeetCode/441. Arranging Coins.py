class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        sum = 1
        i = 1
        while sum <= n:
            i+=1
            sum += i
        return i-1
