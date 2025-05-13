class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);

        int start=0,end=nums.size()-1;
        int index1=-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                index1=mid;
                end=mid-1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        if(index1==-1) return ans;

        start=index1+1,end=nums.size()-1;
        int index2=-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
                index2=mid;
                start=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        if(index1!=-1 && index2!=-1){
            ans[0]=index1;
            ans[1]=index2;
        }
        if(index2==-1){
            ans[0]=index1;
            ans[1]=index1;
        }
        
        return ans;
    }
};