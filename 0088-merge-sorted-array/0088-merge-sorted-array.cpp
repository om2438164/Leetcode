class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;          // Pointer for nums1's last valid element
        int j = n - 1;          // Pointer for nums2's last element
        int k = m + n - 1;      // Pointer for nums1's last index

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If any remaining elements in nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
