class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int N = prices.size();
        int profit = 0;
        for(int i = 0; i<N;i++){
            buy = min(buy,prices[i]);
            profit = max(prices[i]-buy,profit);
        }
        return profit;
    }
};
