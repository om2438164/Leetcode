class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;  // Sliding window pointers
        int zeroCount = 0; // Count of flipped zeros
        int maxLen = 0;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                zeroCount++; // Flip zero
            }

            while (zeroCount > k) { // Shrink window if flipped zeros exceed k
                if (nums[i] == 0) {
                    zeroCount--; // Restore flip count
                }
                i++; // Move left pointer
            }

            maxLen = max(maxLen, j - i + 1); // Update max length
            j++; // Expand right pointer
        }
        return maxLen;
    }
};
