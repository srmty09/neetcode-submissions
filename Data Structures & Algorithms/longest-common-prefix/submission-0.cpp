class Solution {
public:
    string find_smallest(vector<string>& strs) {
        string ans = strs[0];

        for (auto &str : strs) {
            if (ans.size() > str.size()) {
                ans = str;
            }
        }
        return ans;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string smallest = find_smallest(strs);
        int N = smallest.size();
        int pos = 0;
        string prev_pref = "";

        while (pos < N) {
            string pref = smallest.substr(0, pos + 1);

            for (auto &str : strs) {
                if (pref != str.substr(0, pos + 1))
                    return prev_pref;
            }

            prev_pref = pref;
            pos++;
        }

        return prev_pref;
    }
};