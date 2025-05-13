class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;

        for(int i = 1; i<n; i++)
        {
            if(prices[i] > prices[i-1])
            {
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};




// JAVA ********************************************************************************************
/*
class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int profit = 0;

        // for(int i=1; i<n; i++)
        // {
        //     if(prices[i] > prices[i-1])
        //     {
        //         profit += prices[i]-prices[i-1];
        //     }
        // }
        // return profit;
        int buy_price = Integer.MAX_VALUE;

        for(int i=0; i<n; i++)
        {
            if(prices[i] < buy_price)
            {
                buy_price = prices[i];
            }
            else
            {
                profit += prices[i]-buy_price;
                buy_price = prices[i];
            }
        }
        return profit;
    }
}
*/


// PYTHON ********************************************************************************************
/*
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        '''profit = 0

        for i in range(1, len(prices)):
            if prices[i] > prices[i-1]:
                profit += prices[i] - prices[i-1]

        return profit'''

        n = len(prices)
        buy_prices = inf
        profit = 0

        for i in range(n):
            if prices[i] < buy_prices:
                buy_prices = prices[i]

            else:
                profit += prices[i] - buy_prices
                buy_prices = prices[i]

        return profit

*/