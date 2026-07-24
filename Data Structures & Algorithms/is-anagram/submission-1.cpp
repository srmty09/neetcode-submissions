class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        map<char, int> mpps;
        map<char, int> mppt;

        for (char c : s) mpps[c]++;
        for (char c : t) mppt[c]++;

        for (auto &[ch, freq] : mpps) {
            if (mppt[ch] != freq)
                return false;
        }

        return true;
    }
};