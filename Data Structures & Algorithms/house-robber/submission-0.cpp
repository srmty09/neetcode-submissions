class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();

        if (N == 1) return nums[0];

        int a = nums[0];
        int b = max(nums[0], nums[1]);
        int c = b;

        for (int i = 2; i < N; i++) {
            c = max(a + nums[i], b);
            a = b;
            b = c;
        }

        return c;
    }
};