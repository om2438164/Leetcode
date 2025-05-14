class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int>prefix(nums.size());
        unordered_map<int,int>map;
        if(nums[0]%2==1) nums[0]=1;
        else nums[0]=0;
        prefix[0]=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]%2==1) nums[i]=1;
            else nums[i]=0;
            prefix[i]=prefix[i-1]+nums[i];
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(prefix[i]==k) count++;
            int temp=prefix[i]-k;
            if(map.count(temp)){
                count+=map[temp];
            }
            map[prefix[i]]++;
        }
        return count;
        
    }
};