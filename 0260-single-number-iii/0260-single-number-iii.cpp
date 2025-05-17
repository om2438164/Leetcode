class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                i+=2;
            }else{
                ans.push_back(nums[i]);
                i++;
            }
        }
        if(ans.size()==1) ans.push_back(nums[i]);
        return ans;
    }
};