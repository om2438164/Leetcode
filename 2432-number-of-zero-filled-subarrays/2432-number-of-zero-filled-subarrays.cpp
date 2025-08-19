class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long count=0;
        for(auto& it:nums){
            if(it!=0 && count!=0){
                ans+=1LL*(count*(count+1))/2;
                count=0;
            }else if(it==0) count++;
        }
        if(count!=0) ans+=1LL*(count*(count+1))/2;
        return ans;
    }
};