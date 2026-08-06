class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N = word1.size();
        int M = word2.size();
        int i = 0;
        int j = 0;
        string ans = "";
        while(i<N && j<M){
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        while(i<N) {
            ans+=word1[i];
            i++;
        }
        while(j<M){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};