class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>map;

        for(auto it:nums) map[it]++;

        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(map[a]==map[b]) return a>b;
            return map[a]<map[b];
        });
        return nums;
    }
};