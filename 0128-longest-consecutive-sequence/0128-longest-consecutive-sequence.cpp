class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // set<int> s;
        // for(auto it:nums){
        //     s.insert(it);
        // }
        // nums.assign(s.begin(),s.end());
        // if(nums.size()==0){
        //     return 0;
        // }
        // if(nums.size()==1){
        //     return 1;
        // }
        // int count=0;
        // int maxi=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if((nums[i+1]-nums[i])==1){
        //         count++;
        //         maxi=max(maxi,count+1);
        //     }else if(nums[i+1]==nums[i]){
        //         continue;
        //     }
        //     else{
        //         maxi=max(maxi,count+1);
        //         count=0;
        //     } 

        // }
        // return (maxi==0 )? 1:maxi;

        // optimal solution
        // use striver video 
        unordered_set<int>s;
        if(nums.size()==0) return 0;
        for(auto it:nums){
            s.insert(it);
        }
        int longest=1;
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int counter=1;
                int x=it+1;
                while(s.find(x++)!=s.end()){
                    counter++;
                }
                longest=max(longest,counter);
            }
        }
        return longest;

    }
};