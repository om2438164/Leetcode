class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(auto it:s) map1[it]++;
        for(auto it:t) map2[it]++;
        return (map1==map2)?1:0;
    }
};