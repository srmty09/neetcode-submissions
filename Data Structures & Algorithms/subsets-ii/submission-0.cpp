class Solution {
private:
    vector<vector<int>> ans;
    void helper(int index, vector<int> vec, vector<int>& org) {
    ans.push_back(vec);
    for (int i = index; i < org.size(); i++) {
        if (i > index && org[i] == org[i - 1]) continue;
        vec.push_back(org[i]);
        helper(i + 1, vec, org);
        vec.pop_back();
    }
}

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> vec;
        helper(0,vec,nums);
        return ans;
    }
};
