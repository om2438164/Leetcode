class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=nums[0];
        int result=-1;
        for(int i=1;i<nums.size();i++){
            int diff=nums[i]-mini;
            if(diff>0){
                result=max(result,diff);
            }
            mini=min(nums[i],mini);
        }
        return result;
    }
};