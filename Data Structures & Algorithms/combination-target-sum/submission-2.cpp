class Solution {
private:
    vector<vector<int>> ans;

    void combination_sum(int index, int sum, vector<int> vec, vector<int>& org, int target) {
        if (sum > target) return;

        if (index == org.size()) {
            if (sum == target) {
                ans.push_back(vec);
            }
            return;
        }

        vec.push_back(org[index]);
        combination_sum(index, sum + org[index], vec, org, target);  

        vec.pop_back();
        combination_sum(index + 1, sum, vec, org, target);  
    }

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        ans.clear();
        vector<int> vec;
        combination_sum(0, 0, vec, nums, target);
        return ans;
    }
};
