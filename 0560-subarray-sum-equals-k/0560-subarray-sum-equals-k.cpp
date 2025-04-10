class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // using sliding window, dosen't work for 0 and negative values 

        // int i = 0, j = 0, sum = 0;
        // int count = 0;
        // if (k == 0)
        //     return 0;
        // while (j < nums.size()) {
        //     sum += nums[j];
        //     while (sum > k) {
        //         sum -= nums[i];
        //         i++;
        //     }
        //     if (sum == k)
        //         count++;
        //     j++;
        // }
        // return count;


        // brute force solution
        // int count=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     int sum=nums[i];
        //     if(nums[i]==k) count++;
        //     for(int j=i+1;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k) count++;
        //     }
        // }
        // if(nums[nums.size()-1]==k) count++;
        // return count;


        // using prefix sum pattern

        vector<int>prefix(nums.size());
        unordered_map<int,int>map;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int j=0,ans=0;
        while(j<nums.size()){
            if(prefix[j]==k) ans++;
            int temp=prefix[j]-k;
            if(map.count(temp)){
                ans+=map[temp];
            }
            map[prefix[j]]++;
            j++;
        }

        return ans;
        
         
    }
};