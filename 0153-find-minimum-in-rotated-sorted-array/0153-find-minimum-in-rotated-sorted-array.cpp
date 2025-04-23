class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            // if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid+1]) return nums[mid];
            if(nums[mid]>nums[end]) start=mid+1;
            else end=mid;
        }
        return nums[start];
        
    }
};