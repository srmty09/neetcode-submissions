class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        string s2 = "";
        int i = 0;
        int j = s.size() - 1;

        while (i < s.size() && j >= 0) {
           
            if (isalnum(s[i])) {
                s1 += tolower(s[i]);
            }
           
            if (isalnum(s[j])) {
                s2 += tolower(s[j]);
            }
            i++;
            j--;
        }

        return s1 == s2;
    }
};
