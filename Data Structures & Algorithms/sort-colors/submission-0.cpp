class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero_cnt = 0;
        int one_cnt = 0;
        int two_cnt = 0;

        for (auto &num : nums) {
            if (num == 0) zero_cnt++;
            if (num == 1) one_cnt++;
            if (num == 2) two_cnt++;
        }

        int N = nums.size();

        for (int i = 0; i < N; i++) {
            if (i < zero_cnt)
                nums[i] = 0;
            else if (i < zero_cnt + one_cnt)
                nums[i] = 1;
            else
                nums[i] = 2;
        }
    }
};