class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int ans=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[j]>prices[i]){
        //             ans=max(ans,prices[j]-prices[i]);
        //         }
        //     }
        // }
        // return ans;

        // kadan's algorithm
        int mini=INT_MAX;
        int profit=0;
        for(auto it:prices){
            mini=min(it,mini);
            profit=max(it-mini,profit);
        }
        return profit;
    }
};