class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
            q;
        vector<int> ans;
        for(int i=0;i<tasks.size();i++){
            int temp=tasks[i][1];
            tasks[i][1]=i;
            tasks[i].push_back(temp);
        }
        sort(tasks.begin(), tasks.end(),
             [&](vector<int>& a, vector<int>& b) { return a[0] < b[0]; });

        int s = tasks[0][0];
        int i = 0;

        while (i < tasks.size()) {
            while (i < tasks.size() && tasks[i][0] <= s) {
                    q.push({tasks[i][2], tasks[i][1], tasks[i][0]});
                    i++;
            }
            if (!q.empty()) {
                s += q.top()[0];
                ans.push_back(q.top()[1]);
                q.pop();
            } else if(i<tasks.size()) {
                s = tasks[i][0];
            }
        }

        while (!q.empty()) {
            ans.push_back(q.top()[1]);
            q.pop();
        }
        return ans;
    }
};