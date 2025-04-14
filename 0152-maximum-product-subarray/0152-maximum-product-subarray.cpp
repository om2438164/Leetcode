class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            int curr=nums[i];
            ans=max(ans,curr);
            for(int j=i+1;j<nums.size();j++){
                curr*=nums[j];
                ans=max(ans,curr);
            }
        }
        ans=max(ans,nums[nums.size()-1]);
        return ans;
    }
};