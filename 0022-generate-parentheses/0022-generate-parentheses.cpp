class Solution {
public:
    void solve(string op,int open,int close,vector<string>&ans){
        if(open==0 && close ==0){
            ans.push_back(op);
            return;
        }


        if(open==close){
            string op1=op+'(';
            solve(op1,open-1,close,ans);
        }else if(open==0){
            string op1=op+')';
            solve(op1,open,close-1,ans);
        }else{
            string op1=op+'(';
            string op2=op+')';
            solve(op1,open-1,close,ans);
            solve(op2,open,close-1,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string op="";
        solve(op,n,n,ans);
        return ans;
    }
};