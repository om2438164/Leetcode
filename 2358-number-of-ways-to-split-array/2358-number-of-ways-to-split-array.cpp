class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long totalsum=0;
        for(auto &it:nums) totalsum=1LL*totalsum+it;

        long long sum1=0,count=0;
        for(int i=0;i<nums.size()-1;i++){
            sum1=1LL*sum1+nums[i];
            totalsum-=nums[i];
            if(sum1>=totalsum) count++;
        }
        return count;
    }
};