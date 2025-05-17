class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int ans=0;
        set<vector<int>>s;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%p==0) count++;
                if(count>k) break;
                int start=i,end=j;
                vector<int>temp;
                while(start<=end){
                    temp.push_back(nums[start]);
                    start++;
                }
                s.insert(temp);

            }
        }
        return s.size();
    }
};