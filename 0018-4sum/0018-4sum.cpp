class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>temp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;nums.size()>=4 && i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int start=j+1,end=nums.size()-1;
                
                while(start<end){
                    long long sum = 1LL * nums[i] + nums[j] + nums[start] + nums[end];
                    if(sum==target){
                            vector<int>sample={nums[i],nums[j],nums[start], nums[end]};
                            sort(sample.begin(),sample.end());
                            temp.insert(sample);
                            start++,end--;
                    }else if(sum>target){
                        end--;
                    }else start++;
                }
                
            }
        }
        for(auto it:temp) ans.push_back(it);
        return ans;
    }
};