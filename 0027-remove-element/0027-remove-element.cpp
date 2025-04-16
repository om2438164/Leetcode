class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>temp;
        // for(auto it:nums){
        //     if(it!=val) temp.push_back(it);
        // }
        // nums=temp;
        // return nums.size();
        int low=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[low],nums[i]);
                low++;
            }else ans=i;
        }
        return low;
    }
};