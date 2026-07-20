import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low = 1
        high = max(piles)
        answer = -1
        while(low<=high):
            mid = low+(high-low)//2
            res = 0
            for i in piles:
                res+=math.ceil(i/mid)
            if(res<=h):
                answer = mid
                high = mid-1
            else:
                low = mid+1
        return answer
                
            
        