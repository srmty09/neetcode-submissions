class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int N = nums.size();
        vector<int> temp;
        for(int i = 0; i<N;i++){
            if(nums[i]!=val) temp.push_back(nums[i]);
        }
        nums = temp;
        return nums.size();
    }
};