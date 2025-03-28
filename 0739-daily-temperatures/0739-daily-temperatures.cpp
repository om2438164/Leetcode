class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<vector<int>> st; 
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top()[1] <= temperatures[i]) {
                st.pop();
            }
            
            if (!st.empty()) {
                ans[i] = st.top()[0] - i;
            }

            st.push({i, temperatures[i]});
        }

        return ans;
    }
};
