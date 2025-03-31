class Solution {
public:

// not a inplace sort
    int removeDuplicates(vector<int>& nums) {
        map<int,int>freq;
        for(auto it:nums) freq[it]++;
        int index=0;
        int count=0;
        for(auto it:freq){
            if(it.second>=2){
                nums[index]=it.first;
                index++;
                nums[index]=it.first;
                count+=2;
            }else{
                nums[index]=it.first;
                count++;
            }
            index++;
        }
        return count;
    }
};