class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    row.push_back(i);
                    break;
                }
            }
        }
        for (int j = 0; j < matrix[0].size(); j++) {
            for (int i = 0; i < matrix.size(); i++) {
                if (matrix[i][j] == 0) {
                    col.push_back(j);
                    break;
                }
            }
        }
        int k = 0;
        for (int i = 0; i < matrix.size(); i++) {
            if (k<row.size() && i == row[k]) {
                for (int j = 0; j < matrix[i].size(); j++) {
                    matrix[i][j] = 0;
                }
                k++;
            }
        }

        k = 0;

        for (int j = 0; j < matrix[0].size(); j++) {
            if (k<col.size() && col[k] == j) {
                for (int i = 0; i < matrix.size(); i++) {
                    matrix[i][j]=0;
                }
                k++;
            }
        }
    }
};