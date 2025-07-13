class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int>pq;

        for(auto &it:trainers){
            pq.push(it);
        }
        sort(players.begin(),players.end(),[&](int &a,int& b){
            return a>b;
        });
        int ans=0;
        for(int i=0;i<players.size() && !pq.empty();i++){
            if(players[i]<=pq.top()){
                ans++;
                pq.pop();
            }
        }
        return ans;
    }
};