class Solution {
public:
    int maxProduct(vector<int>& nums) {

        // Brute force
        // int ans=INT_MIN;
        // for(int i=0;i<nums.size()-1;i++){
        //     int curr=nums[i];
        //     ans=max(ans,curr);
        //     for(int j=i+1;j<nums.size();j++){
        //         curr*=nums[j];
        //         ans=max(ans,curr);
        //     }
        // }
        // ans=max(ans,nums[nums.size()-1]);
        // return ans;


        // Kadan's product version
        int curr=1,prod1=INT_MIN;
        for(auto it:nums){
            curr*=it;
            prod1=max(prod1,curr);
            if(curr==0) curr=1;
        }

        int prod2=INT_MIN;
        curr=1;
        for(int i=nums.size()-1;i>=0;i--){
            curr*=nums[i];
            prod2=max(prod2,curr);
            if(curr==0) curr=1;
        }
        return max(prod1,prod2);
    }
};