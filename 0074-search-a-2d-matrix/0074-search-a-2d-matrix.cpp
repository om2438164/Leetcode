class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(auto it:matrix){
        //         if(binary_search(it.begin(),it.end(),target)){
        //             return true;
        //         }
        // } 
        // return false;
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0,end=row*col-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int element=matrix[mid/col][mid%col];
            if(element==target) return true;
            else if(element<target) start=mid+1;
            else end=mid-1;
        }
        return false;
    }
};