class Solution {
public:
    int beautySum(string s) {
        unordered_map<int,int>map;
        int sum=0;
        for(int i=0;i<s.size();i++){
            vector<int>arr(26,0);
            for(int j=i;j<s.size();j++){
                arr[s[j]-'a']++;
                int maxi=0,mini=INT_MAX;
            for(auto it:arr){
                maxi=max(maxi,it);
                if(it>0){
                    mini=min(mini,it);
                }
            }
            sum+=maxi-mini;
            }
            
        }
        return sum;
    }
};