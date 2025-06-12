class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>row(m,vector<int>(2));
        
        for(int i=0;i<m;i++){
            int ones=0,zeros=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) zeros++;
                if(grid[i][j]==1) ones++;
            }
            row[i]={zeros,ones};
        }

        vector<vector<int>>col(n,vector<int>(2));

        for(int j=0;j<n;j++){
            int ones=0,zeros=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==0) zeros++;
                if(grid[i][j]==1) ones++;
            }
            col[j]={zeros,ones};
        }
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=row[i][1]+col[j][1]-row[i][0]-col[j][0];
            }
        }
        return ans;
    }
};