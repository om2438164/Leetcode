class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),[&](vector<int>a,vector<int>b){
            return a[1]<b[1];
        });
        int count=0;
        for(auto it:intervals){
            int start=it[0];
            int end=it[1];
            if(ans.empty() || start>=ans.back()[1]){
                ans.push_back(it);
                
            }else{
                // overlapping 
                count++;
            }
        }
        return count;
    }
};