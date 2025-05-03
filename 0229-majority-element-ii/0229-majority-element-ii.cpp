class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int sample=nums.size()/3;
        set<int>s;
        vector<int>ans;
        for(auto it:nums){
            map[it]++;
            if(map[it]>sample){
                s.insert(it);
            }
        }
        for(auto it:s) ans.push_back(it);
        return ans;
    }
};