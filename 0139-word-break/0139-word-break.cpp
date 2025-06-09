class Solution {
public:
    bool solve(string s, vector<string>& wordDict, unordered_map<string, bool>& memo) {
        if (s.empty()) return true;
        if (memo.find(s) != memo.end()) return memo[s];

        for (string word : wordDict) {
            if (s.find(word) == 0) {
                string remaining = s.substr(word.size());
                if (solve(remaining, wordDict, memo)) {
                    return memo[s] = true;
                }
            }
        }

        return memo[s] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, bool> memo;
        return solve(s, wordDict, memo);
    }
};
