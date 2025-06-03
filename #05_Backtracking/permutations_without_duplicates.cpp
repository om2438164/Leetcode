class Solution {
public:
    // void solve(vector<int>&nums,vector<int>temp,vector<vector<int>>&ans){
    //     // if(nums.size()==0){
    //     //     ans.push_back(temp);
    //     //     return;
    //     // }

    //     // for(int i=0;i<nums.size();i++){
    //     //     int element=nums[i];
    //     //     temp.push_back(nums[i]);
    //     //     nums.erase(nums.begin()+i);
    //     //     solve(nums,temp,ans);
    //     //     nums.insert(nums.begin()+i,element);
    //     //     temp.pop_back();
    //     // }


    // }

    void solve(vector<int>&nums,vector<vector<int>>&result,int &start){
        if(start>=nums.size()){
            result.push_back(nums);
            return;
        }

        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            start=start+1;
            solve(nums,result,start);
            start--;//backtrack
            swap(nums[start],nums[i]);//backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        // vector<vector<int>>result;
        // vector<int>temp;

        // solve(nums,temp,result);
        // return result;


        vector<vector<int>>result;
        int start=0;
        solve(nums,result,start);
        return result;
    }
};