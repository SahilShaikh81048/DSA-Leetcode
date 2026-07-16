class Solution:
    def gcdSum(self, nums: list[int]) -> int:

        import math

        prefixGcd = []

        current_max = 0

        # Step 1: Create prefixGcd
        for num in nums:
            current_max = max(current_max, num)

            value = math.gcd(num, current_max)

            prefixGcd.append(value)


        # Step 2: Sort prefixGcd
        prefixGcd.sort()


        # Step 3: Pair smallest and largest
        left = 0
        right = len(prefixGcd) - 1

        answer = 0

        while left < right:
            answer += math.gcd(prefixGcd[left], prefixGcd[right])

            left += 1
            right -= 1


        return answer   