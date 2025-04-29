class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        // intervals.push_back({newInterval[0],newInterval[1]});

        // sort(intervals.begin(),intervals.end());

        // vector<vector<int>>ans;
        // for(auto it:intervals){
        //     if(ans.empty() || it[0]>ans.back()[1]){
        //         ans.push_back(it);
        //     }else{
        //         //overlapping
        //         int temp=max(it[1],ans.back()[1]);
        //         ans.back()[1]=temp;
        //     }
        // }
        // return ans;
        vector<vector<int>> temp;
        vector<vector<int>> ans;
        int i = 0;
        while (i < intervals.size() && intervals[i][0] <= newInterval[0] ) {
            temp.push_back(intervals[i]);
            i++;
        }
        temp.push_back(newInterval);
        while (i < intervals.size()) {
            temp.push_back(intervals[i]);
            i++;
        }

        for (auto it : temp) {
            if (ans.empty() || it[0] > ans.back()[1]) {
                ans.push_back(it);
            } else {
                // overlapping
                ans.back()[1] = max(it[1], ans.back()[1]);
            }
        }
        return ans;
    }
};