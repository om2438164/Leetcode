class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;

        while(start<end){
            int mid=start+(end-start)/2;

            if(mid%2==0){
                // even case
                if(nums[mid]==nums[mid+1]) start=mid+2;
                else end=mid;
            }else{
                // odd case
                if(nums[mid]==nums[mid-1]) start=mid+1;
                else end=mid;

            }
        }
        return nums[start];
    }
};