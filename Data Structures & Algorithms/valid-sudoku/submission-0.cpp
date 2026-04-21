class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row, col;
            for (int j = 0; j < 9; j++) {
                if (row.count(board[i][j]) || col.count(board[j][i])) return false;
                if (board[i][j] >= '1' && board[i][j] <= '9') row.insert(board[i][j]);
                if (board[j][i] >= '1' && board[j][i] <= '9') col.insert(board[j][i]);
            }
        }
        for (int i = 0; i < 9; i++) {
            unordered_set<char> flag;
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int x = 3 * (i % 3) + j;
                    int y = 3 * (i / 3) + k;
                    // cout << board[x][y] << " ";
                    if (board[x][y] == '.') continue;
                    if (flag.count(board[x][y])) return false;
                    flag.insert(board[x][y]);
                }
            }
            // cout << "\n";
        }
        return true;
    }
};
