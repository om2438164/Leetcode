class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<vector<int>>q;
        vector<int>ans;

        for(int i=0;i<arr.size();i++){
            q.push({abs(arr[i]-x),arr[i]});
            if(q.size()>k){
                q.pop();
            }
        }
        while(!q.empty()){
            ans.push_back(q.top()[1]);
            q.pop();
        }
       sort(ans.begin(),ans.end());
        return ans;

    }
};