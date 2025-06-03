class Solution {
public:
    void solve(vector<int>&nums,int ans,int &count,int i){
        if(i>=nums.size()){
            count+=ans;
            return;
        }

        solve(nums,ans,count,i+1);
        solve(nums,ans^nums[i],count,i+1);
    }

    int subsetXORSum(vector<int>& nums) {
        int i=0;
        int count=0;
        int ans=0;
        solve(nums,ans,count,i);
        return count;
    }
};