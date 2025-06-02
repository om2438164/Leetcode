class Solution {
public:
    void solve(string s,string &op,int i,vector<string>&ans){
        if(i>=s.size()){
            ans.push_back(op);
            return;
        }

        if(isdigit(s[i])){
            op+=s[i];
            solve(s,op,i+1,ans);
            op.pop_back();

        }else{
            char ch1=toupper(s[i]);
            char ch2=tolower(s[i]);
            op+=ch1;
            solve(s,op,i+1,ans);
            op.pop_back();
            op+=ch2;
            solve(s,op,i+1,ans);
            op.pop_back();
        }

    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string op="";
        int i=0;
        solve(s,op,i,ans);
        return ans;
    }
};