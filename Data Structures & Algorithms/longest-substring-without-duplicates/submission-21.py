class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if(len(s)==1):
            return 1
        l = 0
        max_size = 0
        res_set = set()
        
        for i in range(len(s)):
            while(s[i] in res_set):
                res_set.remove(s[l])
                l+=1
            res_set.add(s[i])
            max_size = max(max_size,len(res_set))
        return max_size;
            