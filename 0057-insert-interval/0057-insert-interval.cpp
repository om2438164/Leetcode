class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        intervals.push_back({newInterval[0],newInterval[1]});
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;

        for(auto it:intervals){
            if(ans.empty() || it[0]>ans.back()[1]){
                ans.push_back(it);
            }else{
                //overlapping
                int temp=max(it[1],ans.back()[1]);
                ans.back()[1]=temp;
            }
        }
        return ans;
    }
};