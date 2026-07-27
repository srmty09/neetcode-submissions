class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int N = s.size();
        unordered_set<char> st;
        int ans = 0;

        while (j < N) {
            while (st.count(s[j]) > 0) {
                st.erase(s[i]);
                i++;
            }

            st.insert(s[j]);
            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};