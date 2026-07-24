class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        
        int count = 1;  
        int max_count = 1;  
        
        auto it = mpp.begin();
        int prev = it->first;
        it++;
        
        while(it != mpp.end()) {
            if(it->first == prev + 1) {
                count++;
                max_count = max(max_count, count);
            } else {
                count = 1;
            }
            prev = it->first;
            it++;
        }
        
        return max_count;
    }
};