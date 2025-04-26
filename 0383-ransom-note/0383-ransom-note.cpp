class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mag;
        for(auto it:magazine) mag[it]++;
        for(auto it:ransomNote){
            if(mag.count(it)){
                mag[it]--;
                if(mag[it]==0) mag.erase(it);
            }else{
                return false;
            }
        }
        return true;
    }
};