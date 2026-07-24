class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (mpp.find(target - num) != mpp.end()) {
                return {mpp[target - num], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};