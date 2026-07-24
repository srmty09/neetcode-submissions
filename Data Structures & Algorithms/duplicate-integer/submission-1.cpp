class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mpp;
        for(int i:nums){
            mpp[i]++;
            if(mpp[i]==2) return true;
        }   
        return false;
    }
};