class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool>temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(temp.count(nums[i])){
                return true;
            }
            temp[nums[i]]=true;
        }
        return false;
    }
};