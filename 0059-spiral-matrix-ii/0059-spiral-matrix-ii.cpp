class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n));  // ✅ Safe and standard
        int count=1;
        int totalCnt=n*n;
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        while(count<=totalCnt){
            for(int i=left;count<=totalCnt && i<=right;i++){
                arr[top][i]=count++;
            }
            top++;
            for(int i=top;count<=totalCnt && i<=bottom;i++){
                arr[i][right]=count++;
            }
            right--;
            for(int i=right;count<=totalCnt && i>=left;i--){
                arr[bottom][i]=count++;
            }
            bottom--;
            for(int i=bottom;count<=totalCnt && i>=top;i--){
                arr[i][left]=count++;
            }
            left++;
        }
        return arr;
    }
};