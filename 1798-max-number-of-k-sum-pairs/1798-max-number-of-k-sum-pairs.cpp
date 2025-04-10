class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        // first solution (nlogn)
        // sort(nums.begin(),nums.end());
        // int left=0,right=nums.size()-1;
        // int count=0;
        // while(left<right){
        //     int sum=nums[left]+nums[right];
        //     if(sum==k){
        //         count++;
        //         left++,right--;
        //     }else if(sum<k) left++;
        //     else right--;
        // }

        unordered_map<int,int>map;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])){
                count++;
                map[nums[i]]--;
                if(map[nums[i]]==0) map.erase(nums[i]);
                
            }else{
                map[k-nums[i]]++;
            }
        }
        return count;
    }
};