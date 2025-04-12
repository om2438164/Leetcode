class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0,rs=0;
        if(nums.size()==0) return -1;
        for(auto it:nums) rs+=it;
        for(int i=0;i<nums.size();i++){  
            rs-=nums[i];
            if(ls==rs) return i;
            ls+=nums[i];
        }
        return -1;
    }
};