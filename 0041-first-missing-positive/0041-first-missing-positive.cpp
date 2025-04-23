class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        for(auto it:nums){
            if(it>0) s.insert(it);
        }
        int i=1;
        int ans=0;
        int temp=0;
        for(auto it:s){
            if(it!=i){
                ans=i;
                break;
            }
            temp=it;
            i++;
        }
        return (ans==0) ? temp+1:ans;

    }
};