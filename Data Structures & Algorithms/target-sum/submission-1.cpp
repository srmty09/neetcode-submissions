class Solution {
public:
    int solve(vector<int>& nums, int target, int idx, int _sum){
        if(_sum == target and idx==nums.size()) return 1;
        else if(idx==nums.size()) return 0;
        else if(idx>nums.size()) return 0;
        else return solve(nums,target,idx+1,_sum+nums[idx])+solve(nums,target,idx+1,_sum-nums[idx]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};
