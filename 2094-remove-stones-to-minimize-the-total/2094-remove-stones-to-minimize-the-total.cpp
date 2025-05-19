class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto it:piles) pq.push(it);

        while(k--){
            double temp=(pq.top()/2.0);
            temp=ceil(temp);
            pq.pop();
            pq.push(temp);
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};