class Solution {
public:
    int ans = 0;

    void dfs(vector<int>& nums, int idx, int xr) {
        if (idx == nums.size()) {
            ans += xr;
            return;
        }

        dfs(nums, idx + 1, xr);

        dfs(nums, idx + 1, xr ^ nums[idx]);
    }

    int subsetXORSum(vector<int>& nums) {
        dfs(nums, 0, 0);
        return ans;
    }
};