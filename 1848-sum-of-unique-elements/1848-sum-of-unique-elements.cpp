class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>map;
        // int sum=0;
        // for(auto it:nums){
        //     if(map.count(it)){
        //         if(map[it]&1==1) sum-=it;
        //         map[it]++;
        //     }else{
        //         sum+=it;
        //         map[it]++;
        //     }
        // }
        // if(sum<=0) return 0;
        // return sum;

        int sum=0;
        for(auto it:nums) map[it]++;
        for(auto it:nums){
            if(map[it]==1) sum+=it;
        }
        return sum;
    }
};