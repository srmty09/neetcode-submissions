class Solution {
private:
    vector<int> n_words;  
public:
    string encode(vector<string>& strs) {
        string s;
        n_words.clear();  
        
        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            int count = 1;  
            
            for(char c : temp) {
                if(c == ' ') {
                    count++;
                }
            }
            n_words.push_back(count);
            s += temp;
            s += " ";  
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int start = 0; 
        
        for(int i = 0; i < n_words.size(); i++) {
            string word = "";
            int spaces_seen = 0;
            
            
            while(start < s.length() && spaces_seen < n_words[i]) {
                if(s[start] == ' ') {
                    spaces_seen++;
                }
                word += s[start];
                start++;
            }
            
            
            if(!word.empty() && word.back() == ' ') {
                word.pop_back();
            }
            
            ans.push_back(word);
        }
        return ans;
    }
};