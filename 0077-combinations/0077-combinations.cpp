class Solution {
public:
    vector<vector<int>>ans;

    void solve(vector<int>&combi,int& k,int i,vector<int>&op){
        if(op.size()==k){
            ans.push_back(op);
            return;
        }

        if(i>=combi.size()) return;

        op.push_back(combi[i]);
        solve(combi,k,i+1,op);
        op.pop_back();
        solve(combi,k,i+1,op);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>combi(n);
        
        vector<int>op;
        for(int i=0;i<n;i++){
            combi[i]=i+1;
        }
        int i=0;
        solve(combi,k,i,op);
        return ans;

    }
};