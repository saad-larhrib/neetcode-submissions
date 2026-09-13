class Solution:
    def isPalindrome(self, s: str) -> bool:
        rev = ''.join(c.lower() for c in s if c.isalnum())
        return rev[::-1] == rev