class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int target = total - x;
        if (target < 0) return -1; // x is greater than total sum

        int maxLen = -1;
        int left = 0, sum = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            // Shrink the window if sum exceeds target
            while (sum > target && left <= right) {
                sum -= nums[left++];
            }

            // Check for valid subarray
            if (sum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        return (maxLen == -1) ? -1 : nums.size() - maxLen;
    }
};
