class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(len(prices)-1):
            buy = i
            for j in range(i+1,len(prices)):
                sell = j
                profit = max(prices[sell]-prices[buy],profit)
        return profit
        