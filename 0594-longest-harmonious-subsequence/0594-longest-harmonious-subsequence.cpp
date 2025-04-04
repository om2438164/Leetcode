class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==1){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};