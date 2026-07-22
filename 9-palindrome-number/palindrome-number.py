class Solution:
    def isPalindrome(self, x: int) -> bool:
        x1=0
        x2=x
        while x > 0:
            digit = x % 10
            x1 = x1 * 10 + digit
            x=x//10
        x=x2
        if x1 == x:
            return True
        else:
            return False