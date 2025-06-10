class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>map;
        for(auto &it:s){
            map[it]++;
        }
        int oddmaxi=INT_MIN;
        int evenmin=INT_MAX;
        for(auto &it:map){
            if(it.second%2==1){
                oddmaxi=max(oddmaxi,it.second);
            }else{
                evenmin=min(evenmin,it.second);
            }
        }
        return oddmaxi-evenmin;
    }
};