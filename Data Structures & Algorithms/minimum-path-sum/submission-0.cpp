class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int M = grid.size();
        int N = grid[0].size();
        vector<vector<int>> dp(M+1,vector<int>(N+1,INT_MAX));

        dp[M-1][N-1] = grid[M-1][N-1];
        for(int i = M-1; i>=0;i--){
            for(int j = N-1; j>=0;j--){
                if(i == M-1 && j == N-1) continue;
                dp[i][j] = grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};