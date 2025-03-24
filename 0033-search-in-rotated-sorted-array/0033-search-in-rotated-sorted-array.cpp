#include<algorithm>
class Solution {
public:

    int binarySearch(vector<int>& nums, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

    int search(vector<int>& nums, int target) {
        // first of all we have to find the index of the minimum element
        // then we have to perfrom bs in both side of arrays


        // finding index of the minimum element using bs
        int start=0,end=nums.size()-1,index=-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if((mid == 0 || nums[mid] < nums[mid - 1]) && 
    (mid == nums.size() - 1 || nums[mid] < nums[mid + 1])){
                index= mid;
                break;
            }else if (nums[mid] > nums[end]) start=mid+1;
            else end=mid;
        }
        if(index==-1) index=start;
        
        // apply bs in both the side of new index
        int index1=binarySearch(nums,0,index-1,target);
        if(index1!=-1) return index1;
        int index2=binarySearch(nums,index,nums.size()-1,target);
        return index2;
    }
};