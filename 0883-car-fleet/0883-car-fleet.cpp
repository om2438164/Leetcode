class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>> positions;
        vector<vector<int>> ans;

        for (int i = 0; i < position.size(); i++) {
            positions.push_back({position[i], speed[i]});
        }

        sort(positions.begin(), positions.end(), [&](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });

        double lasttime = 0;

        for (int i = positions.size() - 1; i >= 0; i--) {
            double time = (double)(target - positions[i][0]) / positions[i][1];
            if (ans.empty() || time > lasttime) { 
                ans.push_back({positions[i][0], positions[i][1]});
                lasttime = time;
            }
        }

        return ans.size();
    }
};
