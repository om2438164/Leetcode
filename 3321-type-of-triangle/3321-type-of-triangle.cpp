class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_map<int,int>map;
        if(!(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1])) return "none";
        for(auto it:nums) map[it]++;
        if(map.size()==1) return "equilateral";
        if(map.size()==2) return "isosceles";
        return "scalene";
    }
};