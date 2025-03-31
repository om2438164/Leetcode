class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> map;

        int i = 0, j = 0;
        int ans=0;
        while (j < s.size()) {
            // expand the window
            if (!map.count(s[j])) {
                map[s[j]] = true;
                cout<<s[j]<<"\n";
                ans=max(ans,j-i+1);
                j++;
            } else {
                while (map.count(s[j])) {
                    // shrink the window
                    cout<<"erase";
                    cout<<s[i]<<"/n";
                    map.erase(s[i]);
                    i++;
                }
               
                ans=max(ans,j-i);
            }
            

        }
        return ans;
    }
};