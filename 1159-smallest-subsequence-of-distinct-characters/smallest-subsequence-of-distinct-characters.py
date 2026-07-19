class Solution:
    def smallestSubsequence(self, s: str) -> str:
        s=s.lower()
        c=""
        ind = []
        n = ord(max(s))-97
        seen = []
        ans = str()
        for i in range(26):
            ind.append(0)
        
        for i in range(26):
            seen.append(0)
        
        for i in range(len(s)):
            ind[ord(s[i])-97]=i
        
        for i in range(len(s)):
            c = s[i]
            if seen[ord(c)-97]:
                continue
            while len(ans) and ans[-1]>c and ind[ord(ans[-1])-97]>i:
                seen[ord(ans[-1])-97]=0
                ans=ans[:-1]
            ans+=c
            seen[ord(c)-97]=1
        return ans