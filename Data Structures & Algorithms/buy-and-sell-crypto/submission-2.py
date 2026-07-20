class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        r = 1
        n=len(prices)
        max_profit = 0

        while(r<n):
            profit = prices[r] - prices[l]
            max_profit = max(profit,max_profit)
            if(prices[l]>prices[r]):
                l=r
                r=l+1
                continue
            r+=1
        return max_profit
            
                    
        