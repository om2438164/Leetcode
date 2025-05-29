class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>map;
        for(auto &it:paths){
            map[it[0]]++;
            map[it[1]]++;
        }
        for(auto &it:paths){
            if(map[it[1]]==1) return it[1];
        }
        return "";
    }
};