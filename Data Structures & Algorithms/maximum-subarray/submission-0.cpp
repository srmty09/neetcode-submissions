class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int N = nums.size();
        vector<int> dp = nums;
        for(int i = 1; i<N;i++){
            dp[i] = max(dp[i],dp[i-1]+nums[i]);
        }
        return *max_element(dp.begin(),dp.end());
    }
};
