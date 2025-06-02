class Solution {
public:
    void solve(vector<int>&nums,vector<int>op,vector<vector<int>>&ans,int i){
        if(i>=nums.size()){
            ans.push_back(op);
            return;
        }

        solve(nums,op,ans,i+1);
        op.push_back(nums[i]);
        solve(nums,op,ans,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        solve(nums,op,ans,0);
        return ans;
    }
};