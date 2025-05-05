vector<vector<int>> merge(vector<vector<int>>& intervals) {

    // Merge Interval pattern
    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    for(auto it:intervals){
        if(ans.empty() || (ans.back()[1]<it[0])){
            // No Overlapping 
            ans.push_back(it);
        }else{
            // overlapping of intervals 
            int temp=max(it[1],ans.back()[1]);
            ans.back()[1]=temp;
        }
    }
    return ans;
}
