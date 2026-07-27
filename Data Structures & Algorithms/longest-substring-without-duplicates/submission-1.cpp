class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int N = s.size();

        unordered_set<char> st;
        int ans = 0;

        while (j < N) {
            if (st.count(s[j])) {
                ans = max(ans, j - i);

                while (st.count(s[j])) {
                    st.erase(s[i]);
                    i++;
                }
            }

            st.insert(s[j]);
            j++;
        }

        ans = max(ans, j - i);

        return ans;
    }
};