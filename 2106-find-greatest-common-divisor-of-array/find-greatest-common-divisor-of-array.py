import math
class Solution:
    def findGCD(self, nums: List[int]) -> int:
        
        larg = max(nums)
        smol = min(nums)
        gcdans = math.gcd(larg,smol)
        return gcdans