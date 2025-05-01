class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int>map;
        // for(auto it:nums){
        //     map[it]++;
        //     if(map[it]>1) return it;
         
        // }
        // return -1;

        vector<bool>temp(100001,false);
        for(int i=0;i<nums.size();i++){
            
            if(temp[nums[i]]==true){
                return nums[i];
            }
            temp[nums[i]]=true;
        }
        return -1;


    }
};