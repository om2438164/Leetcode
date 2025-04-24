class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int count=0;
        int sr=0,ec=col-1,er=row-1,sc=0;
        while(count<total){
            // sr
            
            for(int j=sc;j<=ec && count<total;j++){
                ans.push_back(matrix[sr][j]);
                count++;
            }
            sr++;
            // ec
            for(int i=sr;i<=er && count<total;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
             
            // er
            for(int j=ec;j>=sc && count<total;j--){
                ans.push_back(matrix[er][j]);
                count++;
            }
            er--;
            //sc
            for(int i=er;i>=sr && count<total;i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};