class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi=INT_MIN;
        unordered_map<int,int>map;
        for(auto it:nums){
            maxi=max(maxi,it);
            if(it>0) map[it]++;
        }
        if(map.empty()) return 1;
        for(int i=1;i<=map.size();i++){
            if(!map.count(i)){
                return i;
            }
        }
        return maxi+1;
    }
};