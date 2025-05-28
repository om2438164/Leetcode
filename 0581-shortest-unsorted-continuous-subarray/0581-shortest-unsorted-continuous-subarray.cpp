class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp(nums);
        sort(temp.begin(),temp.end());
        int start=0,end=temp.size()-1;
        while(start<=end){
            if(temp[start]!=nums[start] && temp[end]!=nums[end]) return end-start+1;
            else if(temp[start]==nums[start] && temp[end]==nums[end]) start++,end--;
            else if(temp[start]==nums[start]) start++;
            else end--;
        }
        return 0;
    }
};