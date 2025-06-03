class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {
        if (nums.size() == 0) {
            ans.push_back(temp);
            return;
        }

        unordered_set<int> used; // Track duplicates at current recursion level

        for (int i = 0; i < nums.size(); i++) {
            if (used.count(nums[i])) continue; // Skip if already used in this level

            used.insert(nums[i]);

            int element = nums[i];
            temp.push_back(element);
            nums.erase(nums.begin() + i);

            solve(nums, temp, ans);

            nums.insert(nums.begin() + i, element);
            temp.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, temp, ans);
        return ans;
    }
};
