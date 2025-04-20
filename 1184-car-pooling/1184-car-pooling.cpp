class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(), trips.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });
        
        priority_queue<vector<int>>q;

        q.push({-trips[0][2],trips[0][0]});
        int sum=trips[0][0];
        if(sum>capacity) return false;
        for(int i=1;i<trips.size();i++){


            if(-q.top()[0]>trips[i][1]){
                // overlapping
                q.push({-trips[i][2],trips[i][0]});
                sum+=trips[i][0];

            }else{
                // no overlapping
                while(!q.empty() && -q.top()[0]<=trips[i][1]){
                    sum-=q.top()[1];
                    q.pop();
                }
                q.push({-trips[i][2],trips[i][0]});
                sum+=trips[i][0];
            }
            if(sum>capacity) return false;
        }
        return true;
    }
};