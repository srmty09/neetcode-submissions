class Solution {
public:
    void reverseString(vector<char>& s) {
        int N = s.size()-1;
        for(int i = 0; i<=N/2;i++){
            char temp = s[i];
            s[i] = s[N-i];
            s[N-i] = temp;
        }
    }
};