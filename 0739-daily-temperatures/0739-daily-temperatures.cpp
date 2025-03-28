class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<vector<int>> st; // Stack stores {index, temperature}

        for (int i = n - 1; i >= 0; i--) {
            // Pop elements until we find a warmer temperature
            while (!st.empty() && st.top()[1] <= temperatures[i]) {
                st.pop();
            }
            
            // If stack is not empty, calculate days to the next warmer temperature
            if (!st.empty()) {
                ans[i] = st.top()[0] - i;
            }

            // Push current element {index, temperature} into stack
            st.push({i, temperatures[i]});
        }

        return ans;
    }
};
