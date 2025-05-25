class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        // brute force
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int maxi=nums[i];
        //     int mini=nums[i];
        //     for(int j=i;j<nums.size();j++){
        //         maxi=max(nums[j],maxi);
        //         mini=min(nums[j],mini);
        //         int diff=(abs(maxi-mini));
        //         if(diff<=limit) ans=max(ans,j-i+1);
        //     }
        // }
        // return ans;

        map<int, int> map;
        int i = 0, j = 0, ans = 0;

        while (j < nums.size()) {
            // do logic here to add arr[right] to curr
            // expand the window
            map[nums[j]]++;
            auto start=map.begin();
            auto end=--map.end();
            while ((map.rbegin()->first - map.begin()->first) > limit) {
                // remove arr[left] from curr or
                // shrink the window
                map[nums[i]]--;
                if(map[nums[i]]==0) map.erase(nums[i]);
                i++;
            }

            // update ans
            ans=max(ans,j-i+1);
            j++;
        }

        return ans;
    }
};