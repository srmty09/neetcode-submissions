class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int N = cost.size() + 1;

        vector<int> dp(N, -1);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < N; i++) {
            if (i == cost.size()) {
                dp[i] = min(dp[i - 1], dp[i - 2]);
            } else {
                dp[i] = min(dp[i - 1] + cost[i],dp[i - 2] + cost[i]);
            }
        }
        return dp[N - 1];
    }
};