class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force
        // vector<int>ans;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //     }
        // }
        // }
        // return ans;
    
        //hashmap
        vector<int>ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])){
                ans.push_back(map[nums[i]]);
                ans.push_back(i);
            }else{
                map[target-nums[i]]=i;
            }
        }
        return ans;
    }
};