class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&combi,int sum,vector<int>&op,int i,int& k,int& n){
        if(op.size()==k && sum==n){
            ans.push_back(op);
            return;
        }
        if(i>=combi.size() || sum>n) return;

        op.push_back(combi[i]);
        
        solve(combi,sum+combi[i],op,i+1,k,n);
        op.pop_back();
        solve(combi,sum,op,i+1,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>combi(9);
        for(int i=0;i<9;i++){
            combi[i]=i+1;
        }

        int i=0;
        int sum=0;
        vector<int>op;
        solve(combi,sum,op,i,k,n);
        return ans;
    }
};