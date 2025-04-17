class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>temp;
        priority_queue<vector<int>>q;
        unordered_map<int,int>map;

        for(auto it:nums){
            if(map.count(it)){
                map[it]++;
            }else{
                temp.push_back(it);
                map[it]++;
            }   
        } 
        for(int i=0;i<k;i++){
            q.push({-1*map[temp[i]],temp[i]});
        }
        for(int i=k;i<temp.size();i++){
            if((-1* q.top()[0]) < map[temp[i]]){
                q.pop();
                q.push({-1*map[temp[i]],temp[i]});
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.top()[1]);
            q.pop();
        }
        return ans;


        
    }
};