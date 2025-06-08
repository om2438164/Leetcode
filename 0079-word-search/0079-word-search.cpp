class Solution {
public:
    bool isvalid(vector<vector<char>>& board, int x, int y, string& word, int wordIndex, int n, int m) {
        return (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == word[wordIndex]);
    }

    bool solve(vector<vector<char>>& board, string& word, vector<vector<int>>& direction,
               int x, int y, int wordIndex, int& n, int& m) {
        
        if (board[x][y] != word[wordIndex]) return false;

        // ✅ Base case: whole word is matched
        if (wordIndex == word.size() - 1) return true;

        char ele = board[x][y];
        board[x][y] = '#'; // mark visited

        for (int i = 0; i < direction.size(); i++) {
            int newx = x + direction[i][0];
            int newy = y + direction[i][1];

            if (isvalid(board, newx, newy, word, wordIndex + 1, n, m)) {
                if (solve(board, word, direction, newx, newy, wordIndex + 1, n, m)) {
                    board[x][y] = ele; // backtrack
                    return true;
                }
            }
        }

        board[x][y] = ele; // backtrack
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (solve(board, word, direction, i, j, 0, n, m))
                        return true;
                }
            }
        }
        return false;
    }
};
