class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     unordered_map<int,int>map;
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(!map.count(nums[j])){
        //             sum+=nums[j];
        //             map[nums[j]]++;
        //         } 
        //         else{
        //             ans=max(ans,sum);
        //             break;
        //         }
        //     }
        //     ans=max(ans,sum);
        // }
        // return ans;

        // using sliding window
        unordered_map<int,int>map;
        int i = 0, j=0;
        int sum=0,ans=0;
        while (j < nums.size()) {
            map[nums[j]]++;
            sum+=nums[j];

            while (map[nums[j]]>1) {
                sum-=nums[i];
                map[nums[i]]--;
                if(map[nums[i]]==0) map.erase(nums[i]);
                i++;
            }

            ans=max(ans,sum);
            j++;
        }
        return ans;
    }
};