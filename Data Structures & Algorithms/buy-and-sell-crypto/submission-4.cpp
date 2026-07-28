class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> buyingValues;
        int n = prices.size();
        int max_value = INT_MAX;
        int max_profit = 0;
        buyingValues.push_back(-1);
        for(int i = 1; i<n;i++){
            max_value = min(max_value,prices[i-1]);
            max_profit = max(max_profit,prices[i]-max_value);
        }

        return max_profit;
    }
};
