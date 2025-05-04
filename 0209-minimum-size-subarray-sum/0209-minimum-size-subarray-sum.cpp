class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j=0, ans = INT_MAX;
    int sum=0;
    while (j < nums.size()) {
        // do logic here to add arr[right] to curr
        // expand the window 
        sum+=nums[j];
        while (sum>target) {
            // remove arr[left] from curr or 
            // shrink the window
            ans=min(ans,j-i+1);
            sum-=nums[i];
            i++;
        }
        if(sum==target){
            ans=min(ans,j-i+1);
        }

        // update ans
        j++;
    }
    if(ans==INT_MAX) return 0;
    return ans;
    }
};