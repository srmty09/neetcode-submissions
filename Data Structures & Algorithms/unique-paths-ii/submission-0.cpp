class Solution {
public:
    int bottomUp(vector<vector<int>>& obstacleGrid) {
        int M = obstacleGrid.size();
        int N = obstacleGrid[0].size();

        vector<vector<int>> dp(M, vector<int>(N, 0));

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (obstacleGrid[i][j] == 1)
                    dp[i][j] = INT_MIN;
            }
        }

        bool flag1 = false;
        for (int i = 0; i < M; i++) {
            if (dp[i][0] == INT_MIN) flag1 = true;

            if (flag1)
                dp[i][0] = INT_MIN;
            else
                dp[i][0] = 1;
        }


        bool flag2 = false;
        for (int j = 0; j < N; j++) {   
            if (dp[0][j] == INT_MIN) flag2 = true;

            if (flag2)
                dp[0][j] = INT_MIN;
            else
                dp[0][j] = 1;
        }

        for (int i = 1; i < M; i++) {   
            for (int j = 1; j < N; j++) {   
                if (dp[i][j] == INT_MIN)
                    continue;

                int up = (dp[i - 1][j] == INT_MIN) ? 0 : dp[i - 1][j];
                int left = (dp[i][j - 1] == INT_MIN) ? 0 : dp[i][j - 1];

                dp[i][j] = up + left;
            }
        }

        return dp[M - 1][N - 1] == INT_MIN ? 0 : dp[M - 1][N - 1];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            return bottomUp(obstacleGrid);

    }
};