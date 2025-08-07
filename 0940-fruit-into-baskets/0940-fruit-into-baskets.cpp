class Solution {
public:
    // int solve(int i,vector<int>&fruits){
    //     set<int>st;
    //     int cnt=0;
    //     while(i<fruits.size()){
    //         if((st.size()<2) || (st.find(fruits[i])!=st.end())){
    //             cnt++;
    //             st.insert(fruits[i]);
    //             i++;
    //         }else{
    //             break;
    //         }
    //     }
    //     return cnt;
    // }
    int totalFruit(vector<int>& fruits) {
        // int ans=0;
        // for(int i=0;i<fruits.size();i++){
        //     ans=max(ans,solve(i,fruits));
        // }
        // return ans;

        int i=0,j=0;
        int ans=0;
        unordered_map<int,int>map;
        while(j<fruits.size()){
            map[fruits[j]]++;
            while(map.size()>2){
                map[fruits[i]]--;
                if(map[fruits[i]]==0) map.erase(fruits[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};