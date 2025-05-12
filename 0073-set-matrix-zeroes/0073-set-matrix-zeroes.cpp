class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int>row;
        unordered_map<int,int>col;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    if(!row.count(i)) row[i]++;
                    if(!col.count(j)) col[j]++;
                }
            }
        }
        
        for (int i = 0; i < matrix.size(); i++) {
            if (row.count(i)) {
                for (int j = 0; j < matrix[i].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
        }


        for (int j = 0; j < matrix[0].size(); j++) {
            if (col.count(j)) {
                for (int i = 0; i < matrix.size(); i++) {
                    matrix[i][j]=0;
                }
            }
        }
    }
};