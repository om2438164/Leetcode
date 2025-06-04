class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int>& temp, vector<vector<int>>& result, int start, int sum) {
        if (sum == target) {
            result.push_back(temp);
            return;
        }
        if (sum > target) return;

        for (int i = start; i < candidates.size(); i++) {
            temp.push_back(candidates[i]);
            sum += candidates[i];
            solve(candidates, target, temp, result, i, sum); // not i+1 because reuse is allowed
            sum -= candidates[i];
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        solve(candidates, target, temp, result, 0, 0);
        return result;
    }
};
