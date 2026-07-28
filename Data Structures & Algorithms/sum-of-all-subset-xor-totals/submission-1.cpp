// class Solution {
// public:
//     int ans = 0;

//     void dfs(vector<int>& nums, int idx, int xr) {
//         if (idx == nums.size()) {
//             ans += xr;
//             return;
//         }

//         dfs(nums, idx + 1, xr);

//         dfs(nums, idx + 1, xr ^ nums[idx]);
//     }

//     int subsetXORSum(vector<int>& nums) {
//         dfs(nums, 0, 0);
//         return ans;
//     }
// };

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        const int MAXX = 2048; 
        vector<vector<int>> dp(nums.size() + 1,vector<int>(MAXX, 0));

        dp[0][0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            for (int xr = 0; xr < MAXX; xr++) {
                dp[i + 1][xr] += dp[i][xr];
                dp[i + 1][xr ^ nums[i]] += dp[i][xr];
            }
        }

        int ans = 0;
        for (int xr = 0; xr < MAXX; xr++)
            ans += xr * dp[nums.size()][xr];

        return ans;
    }
};