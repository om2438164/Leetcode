class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string,int>map;
        set<char>s;
        for(auto word:words){
            string temp="";
            for(auto it:word){
                s.insert(it);
            }
            for(auto it:s){
                temp+=it;
                
            }
            s.clear();
            map[temp]++;
        }
        int ans=0;
        for(auto it:map){
            if(it.second>1) ans+=(it.second * (it.second - 1)) / 2;
        }
        return ans;
    }
};