class Solution {
private:
    vector<vector<int>> ans;

    void helper(vector<int>& vec, vector<int>& org, vector<bool>& used) {
        if (vec.size() == org.size()) {
            ans.push_back(vec);
            return;
        }

        for (int i = 0; i < org.size(); i++) {
            if (used[i]) continue;

            used[i] = true;
            vec.push_back(org[i]);
            helper(vec, org, used);
            vec.pop_back();
            used[i] = false;
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> vec;
        vector<bool> used(nums.size(), false);
        helper(vec, nums, used);
        return ans;
    }
};
