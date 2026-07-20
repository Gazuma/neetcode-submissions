import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        total = sum(piles)
        piles.sort()
        i=1
        res = 0
        for j in piles:
            res+=math.ceil(j/i)
        while(res>h):
            res = 0
            for j in piles:
                res+=math.ceil(j/i)
            if(res<=h):
                break
            i+=1
        print(res)
        return i;
            
        