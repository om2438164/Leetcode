class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        int i=n-1;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }

        if(i<0){
            sort(nums.begin(),nums.end());
            return;
        } 
        int pivot=i;
        int j=n;
        while(j>=0 && nums[pivot]>=nums[j]){
            j--;
        }
        swap(nums[i],nums[j]);
        sort(nums.begin()+i+1,nums.end());

    }
};