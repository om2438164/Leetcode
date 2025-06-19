class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long long maxi=INT_MIN;
        
        for(auto &it:accounts){
            long long sum=0;
            for(auto &i:it){
                sum=1LL*sum+i;
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};