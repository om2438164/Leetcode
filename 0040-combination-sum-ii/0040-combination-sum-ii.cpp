class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int>& temp,
               vector<vector<int>>& result, int start, int& sum) {
        if (sum == target) {
            result.push_back(temp);
            return;
        }
        if (sum > target)
            return;
        unordered_set<int> st;
        for (int i = start; i < candidates.size(); i++) {
            if (st.find(candidates[i]) == st.end()) {
                st.insert(candidates[i]);
                temp.push_back(candidates[i]);
                sum += candidates[i];
                solve(candidates, target, temp, result, i + 1, sum);
                temp.pop_back();
                sum -= candidates[i];
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        int sum = 0;
        int start = 0;
        solve(candidates, target, temp, result, start, sum);
        return result;
    }
};