class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int M = text1.size();
        int N = text2.size();
        vector<vector<int>> dp(M+1,vector<int>(N+1,0));
        for(int i = M-1; i>=0; i--){
            for(int j = N-1; j>=0;j--){
                if(text1[i]==text2[j]){
                    dp[i][j] = 1+dp[i+1][j+1];
                }
                else{
                    dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};
