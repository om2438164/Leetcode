class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(nums.size()*2);
        int j=ans.size()/2;
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[j]=nums[i];
            j++;
        }
        return ans;
    }
};