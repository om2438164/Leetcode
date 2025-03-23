class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>temp2;
        // vector<vector<int>>ans;
        // for(int i=0;i<nums.size()-2;i++){
        //     for(int j=i+1;j<nums.size()-1;j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int>temp={nums[i],nums[j],nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 temp2.insert(temp);
        //             }
        //         }
        //     }
        // }
        // for(auto it:temp2){
        //     ans.push_back(it);
        // }
        // return ans;


        vector<vector<int>>ans;
        set<vector<int>>s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int low=i+1;
            int high=n-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    s.insert({nums[i],nums[low],nums[high]});
                    low++,high--;
                }else if(sum<0){
                    low++;
                }else{
                    high--;
                }
            }
        }

        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
        
    }
};