class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j=0, ans = INT_MAX,sum=0;

    while (j < nums.size()) {
        // do logic here to add arr[right] to curr
        // expand the window 
        sum+=nums[j];
        while (sum>=target) {
            // shrink the window
            ans = min(ans, j - i + 1);
            sum-=nums[i];
            i++;
        }

        // update ans
        cout<<sum<<endl;
        
        j++;
    }

    return (ans==INT_MAX)? 0 :ans;
    }
};