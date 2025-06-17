class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;

        unordered_map<char,int>map1;
        unordered_map<char,int>map2;

        for(int i=0;i<word1.size();i++){
            map1[word1[i]]++;
            map2[word2[i]]++;
        }

        vector<int>temp1;
        vector<int>temp2;
        set<char>s1;
        set<char>s2;
        for(auto &it:map1){
            temp1.push_back(it.second);
            s1.insert(it.first);
        }
        for(auto &it:map2){
            temp2.push_back(it.second);
            s2.insert(it.first);
        }
         if(s1!=s2) return false;
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        return temp1==temp2;
    }
};