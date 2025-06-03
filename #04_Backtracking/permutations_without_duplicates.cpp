class Solution {
public:
    void solve(vector<int>&nums,vector<int>temp,vector<vector<int>>&ans){
        if(nums.size()==0){
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            int element=nums[i];
            temp.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            solve(nums,temp,ans);
            nums.insert(nums.begin()+i,element);
            temp.pop_back();
        }


    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;

        solve(nums,temp,result);
        return result;
    }
};