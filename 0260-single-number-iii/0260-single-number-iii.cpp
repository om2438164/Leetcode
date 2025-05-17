class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(auto it:nums) map[it]++;
        for(auto it:nums){
            if(map[it]==1) ans.push_back(it);
        }
        return ans;
    }
};