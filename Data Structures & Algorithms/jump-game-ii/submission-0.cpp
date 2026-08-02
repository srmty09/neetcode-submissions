class Solution {
public:
    int jump(vector<int>& nums) {
        int N = nums.size();
        vector<int> dp(N,INT_MAX);
        dp[0] = 0;
        for(int i = 0; i<N;i++){
            for(int j = 0; j<i;j++){
                if(i<=nums[j]+j){
                    dp[i] = min(dp[j]+1,dp[i]);
                }
            }
        }
        return dp[N-1];
    }
};
