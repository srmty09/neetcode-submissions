class Solution {
private:
    vector<vector<int>> ans;
    set<vector<int>> setans;

    void helper(int index, int sum, vector<int> vec, vector<int>& org, int target) {
        if (sum > target) return;

        if (sum == target) {
            sort(vec.begin(), vec.end());   
            setans.insert(vec);
            return;
        }

        for (int i = 0; i < org.size(); i++) {
            vec.push_back(org[i]);
            helper(i, sum + org[i], vec, org, target);  
            vec.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> vec;
        helper(0, 0, vec, nums, target);
        for (auto& v : setans) {
            ans.push_back(v);
        }

        return ans;
    }
};
