class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // Step 1: Transpose the matrix (swap rows and columns)
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {  // Only swap upper triangle (i <= j)
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Step 2: Reverse each row of the transposed matrix
        for (int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end()); // Reverse in-place
        }
       
    }
};