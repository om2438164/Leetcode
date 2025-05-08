class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<double>>q;
        vector<vector<int>>ans;
        for(auto it:points){
            double temp=(it[0]*it[0])+(it[1]*it[1]);
            temp=(double) sqrt(temp);

            q.push({temp,(double) it[0],(double) it[1]});
            if(q.size()>k) q.pop();
        }
        while(!q.empty()){
            ans.push_back({(int)q.top()[1],(int)q.top()[2]});
            q.pop();
        }
        return ans;
    }
};