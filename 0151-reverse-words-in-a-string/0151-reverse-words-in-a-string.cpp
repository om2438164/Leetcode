class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        string ans = "";

        while (i >= 0) {
            // Skip trailing spaces
            while (i >= 0 && s[i] == ' ') i--;

            if (i < 0) break;

            string temp = "";
            // Build the word backwards
            while (i >= 0 && s[i] != ' ') {
                temp += s[i];
                i--;
            }
            reverse(temp.begin(), temp.end());

            if (!ans.empty()) ans += " ";
            ans += temp;
        }

        return ans;
    }
};
