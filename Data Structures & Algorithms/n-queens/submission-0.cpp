class Solution {
private:
    vector<vector<string>> ans;
    bool isSafe(int row, int col, vector<string> &board, int n) {
        int orgrow = row, orgcol = col;

        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        row = orgrow;
        col = orgcol;

        while (col >= 0) {
            if (board[row][col] == 'Q') return false;
            col--;
        }

        row = orgrow;
        col = orgcol;

        while (row < n && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        return true;
    }
    void solve(int col, vector<string> &board, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(col + 1, board, n);
                board[row][col] = '.';
            }
        }
    }   
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(0,board,n);
        return ans;
    }
};
