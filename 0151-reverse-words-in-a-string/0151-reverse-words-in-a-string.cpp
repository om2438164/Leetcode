class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Reverse the whole string
        reverse(s.begin(), s.end());

        int n = s.size();
        int i = 0;
        string result = "";

        while (i < n) {
            // Skip spaces
            while (i < n && s[i] == ' ') i++;

            if (i >= n) break;

            int j = i;
            while (j < n && s[j] != ' ') j++;

            // Now s[i..j-1] is a word
            string word = s.substr(i, j - i);
            reverse(word.begin(), word.end());

            // Add a space if result already has content
            if (!result.empty()) result += " ";
            result += word;

            i = j;
        }

        return result;
    }
};
