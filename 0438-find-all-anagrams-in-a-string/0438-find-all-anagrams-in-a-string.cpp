class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>map;
        unordered_map<char,int>temp;
        vector<int>ans;
        int k=p.size();
        for(auto it:p) map[it]++;
        int i=0,j=0;
        while(j<k){
            temp[s[j]]++;
            j++;
        }
        while(j<=s.size()){
            if(map==temp) ans.push_back(i);
            temp[s[i]]--;
            if(temp[s[i]]==0) temp.erase(s[i]);
            temp[s[j]]++;
            j++,i++;
        }
        return ans;


    }
};