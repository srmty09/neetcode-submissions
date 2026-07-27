class Solution {
public:
    int solve(vector<int>& nums){
        int N = nums.size();
        vector<int> mx = nums;
        vector<int> mn = nums;
        for(int i = 1; i<N;i++){
            int num = nums[i];

            mx[i] = max({num, mx[i-1] * num, mn[i-1] * num});
            mn[i] = min({num, mx[i-1] * num, mn[i-1] * num});
        }
        return *max_element(mx.begin(),mx.end());
    }
    int maxProduct(vector<int>& nums) {
        return solve(nums);
    }
};
