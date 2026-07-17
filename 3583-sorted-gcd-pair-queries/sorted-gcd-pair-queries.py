class Solution:
    def gcdValues(self, nums: List[int], queries: List[int]) -> List[int]:

        from collections import Counter
        from math import gcd
        import bisect

        MAX = max(nums)

        # Step 1: Count frequency of each number
        freq = Counter(nums)

        # Step 2: Count how many numbers are divisible by each value
        divisible_count = [0] * (MAX + 1)

        for i in range(1, MAX + 1):
            for j in range(i, MAX + 1, i):
                divisible_count[i] += freq[j]


        # Step 3: Count pairs whose gcd is exactly i
        gcd_count = [0] * (MAX + 1)

        for i in range(MAX, 0, -1):

            # numbers divisible by i
            count = divisible_count[i]

            # total pairs among those numbers
            pairs = count * (count - 1) // 2

            gcd_count[i] = pairs

            # Remove pairs having gcd multiples of i
            for j in range(2 * i, MAX + 1, i):
                gcd_count[i] -= gcd_count[j]


        # Step 4: Prefix sum to know index ranges
        prefix = [0] * (MAX + 1)

        for i in range(1, MAX + 1):
            prefix[i] = prefix[i-1] + gcd_count[i]


        # Step 5: Answer queries using binary search
        answer = []

        for q in queries:
            answer.append(bisect.bisect_left(prefix, q + 1))

        return answer