class Solution {
public:
    bool canJump(vector<int>& nums) {
        int N = nums.size();
        vector<int> dp(N, INT_MAX);

        dp[0] = 0;

        for (int i = 1; i < N; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] != INT_MAX && j + nums[j] >= i) {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }

        return dp[N - 1] != INT_MAX;
    }
};