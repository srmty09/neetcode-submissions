class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;
        int j = 1;
        int cnt = 1;

        while (j < nums.size()) {
            while (j < nums.size() && nums[j] == nums[i]) {
                j++;
            }

            if (j < nums.size()) {
                nums[cnt] = nums[j];  
                cnt++;
                i = j;
                j++;
            }
        }

        return cnt;
    }
};