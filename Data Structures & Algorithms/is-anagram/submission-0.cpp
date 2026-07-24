class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) { 
            return false;
        } else {
            map<char, int> mpp1;
            map<char, int> mpp2;
            for (int i = 0; i < s.size(); i++) {
                mpp1[s[i]]++;
                mpp2[t[i]]++;
            }
            vector<int> vec1;
            vector<int> vec2;
            string s1;
            string s2; 
            for (auto it : mpp1) {
                vec1.push_back(it.second);
                s1+=it.first; 
            }
            for (auto it : mpp2) { 
                vec2.push_back(it.second); 
                s2+=it.first;
            }
            for(int i=0;i<s1.size();i++){
                if(s1[i]!=s2[i]){
                    return false;
                }
            }
            for (int i = 0; i < vec1.size(); i++) { 
                if (vec1[i] != vec2[i]) { 
                    return false;
                }
            }
        }
        return true;
    }
};

