class Solution {
private:
    bool helper(int i, int j, int upper, int lower, string word, vector<vector<char>>& board, string org, vector<vector<bool>>& visited) {
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || visited[i][j])
            return false;

        word.push_back(board[i][j]);  
        visited[i][j] = true;

        if (word == org) return true;
        if (word.size() >= org.size()) {
            visited[i][j] = false;
            return false;
        }

        bool found =
            helper(i + 1, j, upper, lower, word, board, org, visited) ||
            helper(i - 1, j, upper, lower, word, board, org, visited) ||
            helper(i, j + 1, upper, lower, word, board, org, visited) ||
            helper(i, j - 1, upper, lower, word, board, org, visited);

        visited[i][j] = false; // backtrack
        return found;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        string current = "";

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (helper(i, j, 0, 0, current, board, word, visited)) {
                    return true;
                }
            }
        }

        return false;
    }
};
