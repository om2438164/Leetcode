int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (nums[mid] == target) return mid; // Found the target
        else if (nums[mid] < target) left = mid + 1; // Search in the right half
        else right = mid - 1; // Search in the left half
    }
    
    return -1; // Target not found
}