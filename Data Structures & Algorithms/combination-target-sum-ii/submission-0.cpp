class Solution {
private:
    vector<vector<int>> ans;
    set<vector<int>> setans;

    void combination_sum(int index, int sum, vector<int> vec, vector<int>& org, int target) {
        if (sum > target) return;

        if (index == org.size()) {
            if (sum == target) {
                sort(vec.begin(),vec.end());
                setans.insert(vec);
            }
            return;
        }

        vec.push_back(org[index]);
        combination_sum(index+1, sum + org[index], vec, org, target);  

        vec.pop_back();
        combination_sum(index + 1, sum, vec, org, target);  
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        ans.clear();
        vector<int> vec;
        combination_sum(0, 0, vec, nums, target);
        for(auto it: setans) ans.push_back(it);
        return ans;
    }
};

