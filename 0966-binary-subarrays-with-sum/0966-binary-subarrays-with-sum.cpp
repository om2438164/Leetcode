class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        vector<int>prefix(nums.size());
        unordered_map<int,int>map;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }

        int count=0;
        for(int i=0;i<nums.size();i++){
            if(prefix[i]==goal) count++;
            int temp=prefix[i]-goal;
            if(map.count(temp)){
                count+=map[temp];
            }
            map[prefix[i]]++;
        }
        return count;
    }
};