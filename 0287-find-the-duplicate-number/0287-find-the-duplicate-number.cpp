class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for(auto it:nums){
            map[it]++;
            if(map[it]>1) return it;
         
        }
        return -1;
    }
};