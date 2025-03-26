class Solution {
public:
    int firstnegative(vector<int>&nums){
        int n=nums.size();
        int start=0,end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<0){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        int count=0;
        if(ans==-1) return 0;
        count=n-ans;
        return count;
    }
    int countNegatives(vector<vector<int>>& grid) {
        // int count=0;
        // for(auto it:grid){
        //     for(int i=0;i<it.size();i++){
        //         if(it[i]<0) count++;
        //     }
        // }
        // return count;
        int count=0;
        for(auto it:grid){
            count+=firstnegative(it);

        }
        return count;
    }
};