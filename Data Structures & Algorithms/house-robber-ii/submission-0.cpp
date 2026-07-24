class Solution {
public:
    int func(vector<int>& nums, int start, int end) {
        if (start == end) return nums[start];

        int a = nums[start];
        int b = max(nums[start], nums[start + 1]);
        int c = b;

        for (int i = start + 2; i <= end; i++) {
            c = max(a + nums[i], b);
            a = b;
            b = c;
        }

        return c;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        int first = func(nums, 0, n - 2);
        int second = func(nums, 1, n - 1);

        return max(first, second);
    }
};