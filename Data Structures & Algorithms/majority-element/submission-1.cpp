class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N = nums.size();
        map<int, int> mpp;

        for (int i = 0; i < N; i++) {
            mpp[nums[i]]++;
        }

        int mx = INT_MIN;
        int ans = INT_MIN;

        for (auto &[num, freq] : mpp) {
            if (freq > mx) {
                mx = freq;
                ans = num;
            }
        }

        return ans;
    }
};