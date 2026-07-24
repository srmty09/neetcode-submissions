class Solution:
    def isPalindrome(self, s: str) -> bool:
        is_palindrom = True
        s1 = ''.join(c.lower() for c in s if c.isalnum())
        t = ''
        for i in range(len(s1) - 1, -1, -1):
            t += s1[i]
        if s1 != t:
            is_palindrom = False
        return is_palindrom

