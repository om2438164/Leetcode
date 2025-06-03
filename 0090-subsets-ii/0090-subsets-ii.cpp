class Solution {
public:
    void solve(vector<int>&nums,vector<int>&ans,set<vector<int>>&st,int i){
        if(i>=nums.size()){
            st.insert(ans);
            return;
        }

        solve(nums,ans,st,i+1);
        ans.push_back(nums[i]);
        solve(nums,ans,st,i+1);
        ans.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>result;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        solve(nums,ans,st,0);

        for(auto &it:st){
            result.push_back(it);
        }
        return result;
    }
};