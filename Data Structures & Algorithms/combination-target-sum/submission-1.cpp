class Solution {
private:
    vector<vector<int>> ans;
    void helper(int index,int sum,vector<int>vec,vector<int> org,int target){
        if(sum>target){
            return;
        }
        if(sum==target){
            ans.push_back(vec);
            return;
        }
        for(int i=index;i<org.size();i++){
            if (i>index and org[i] == org[i-1]) continue;
            vec.push_back(org[i]);
            helper(i,sum+org[i],vec,org,target);
            vec.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> vec;
        helper(0,0,vec,nums,target);
        return ans;
    }
};
