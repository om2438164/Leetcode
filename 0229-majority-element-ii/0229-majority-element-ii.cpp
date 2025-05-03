class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int sample=nums.size()/3;
        vector<int>ans;
        for(auto it:nums){
            map[it]++;
        }
        for(auto it:map){
            if(it.second>sample){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};