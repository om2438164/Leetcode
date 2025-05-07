class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // brute force

        // int n=p.size();
        // unordered_map<char,int>map;
        // vector<int>ans;
        // for(auto it:p) map[it]++;
        // for(int i=0;i<=s.size()-n;i++){
        //     unordered_map<char,int>temp;
        //     for(int j=i;j<i+n;j++){
        //         temp[s[j]]++;
        //     }
        //     if(map==temp){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        unordered_map<char, int> map;
        unordered_map<char, int> temp;
        vector<int> ans;
        for (auto it : p)
            map[it]++;
        int j = 0, i = 0;
        int k = p.size();
        while (j < k) {
            temp[s[j]]++;
            j++;
        }
        // validate first window
        if (map == temp) {
            ans.push_back(i);
        }

        while (j < s.size()) {
            temp[s[j]]++;
            temp[s[i]]--;
            if (temp[s[i]] == 0)
                temp.erase(s[i]);
            i++, j++;
            if (map == temp) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};