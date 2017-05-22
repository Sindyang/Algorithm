class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        words = s.split(' ')
        news = ''
        for word in words:
            newword = word[::-1]
            news += ' ' + newword
        news = news[1:]
        return news
        
