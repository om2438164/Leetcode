class Solution {
public:
    void solve(string& s, int k, int& result) {
        if (k == 0) return;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] > s[i]) {
                    swap(s[i], s[j]);
                    result = max(result, stoi(s));
                    solve(s, k - 1, result);
                    swap(s[i], s[j]); // backtrack
                }
            }
        }
    }

    int maximumSwap(int num) {
        string s = to_string(num);
        int result = num;
        solve(s, 1, result);  // 1 swap allowed
        return result;
    }
};
