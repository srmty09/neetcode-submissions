class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> original;
        for(int i = 0; i < nums.size(); i++){
            original[nums[i]]++;  
        }
        
        multimap<int, int> sorted;
        for(const auto& it : original){
            sorted.insert({it.second, it.first});
        }
        
        vector<int> ans;
        auto it = sorted.rbegin();  
        while(k--){
            ans.push_back(it->second);  
            it++;
        }
        return ans;  
    }
};
