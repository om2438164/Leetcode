class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;
        unordered_set<int>test;

        for(auto &it:arr) map[it]++;

        for(auto &it:map){
            if(test.find(it.second)!=test.end()){
                return 0;
            }
            test.insert(it.second);
        }
        return 1;
    }
};