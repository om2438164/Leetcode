class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int i = 0, j = 0, ans = 0;

        while (j < s.size()) {
            // do logic here to add arr[right] to curr
            // expand the window
            map[s[j]]++;

            while (map[s[j]]>1) {
                // remove arr[left] from curr or
                // shrink the window
                map[s[i]]--;
                if(map[s[i]]==0) map.erase(s[i]);
                i++;
            }

            // update ans
            ans=max(ans,j-i+1);
            j++;
        }

        return ans;
    }
};