class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int minMaxPairSum = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            int pairSum = nums[i] + nums[j];
            minMaxPairSum = max(minMaxPairSum, pairSum);
            i++;
            j--;
        }
        return minMaxPairSum;
    }
};