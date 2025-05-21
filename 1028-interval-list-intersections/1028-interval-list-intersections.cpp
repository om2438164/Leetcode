class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        for(auto &it:secondList){
            firstList.push_back(it);
        }
        sort(firstList.begin(),firstList.end(),[&](vector<int>&a,vector<int>&b){
            return a[0]<b[0];
        });
        vector<vector<int>>ans;
        vector<vector<int>>result;
        for(auto &it:firstList){
            if(ans.empty() || it[0]>ans.back()[1]){
                // no overlapping
                ans.push_back(it);
            }else{
                result.push_back({it[0],min(it[1],ans.back()[1])});
                ans.back()[1]=max(it[1],ans.back()[1]);
                ans.back()[0]=max(ans.back()[0],it[0]);
            }
        }
        return result;
    }
};