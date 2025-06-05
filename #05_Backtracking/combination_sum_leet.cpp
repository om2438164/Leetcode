class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int>& temp,
               vector<vector<int>>& result, int i, int sum) {
        if (i >= candidates.size())
            return;
        if (sum == target) {
            result.push_back(temp);
            return;
        }
        if (sum > target)
            return;

        temp.push_back(candidates[i]);
        sum += candidates[i];
        solve(candidates, target, temp, result, i,
              sum); // not i+1 because reuse is allowed
        sum -= candidates[i];
        temp.pop_back();

        solve(candidates, target, temp, result, i + 1, sum);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        solve(candidates, target, temp, result, 0, 0);
        return result;
    }
};
