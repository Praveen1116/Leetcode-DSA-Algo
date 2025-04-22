class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int buyPrice = prices[0];
            int profit = 0;
    
            for(int i=1; i<n; i++)
            {
                if(prices[i] < buyPrice)
                {
                    buyPrice = prices[i];
                }
    
                profit = max(profit, prices[i] - buyPrice);
            }
            return profit;
        }
    };