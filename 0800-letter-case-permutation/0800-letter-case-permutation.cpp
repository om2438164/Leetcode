class Solution {
public:
    void solve(string s,string op,int i,vector<string>&ans){
        if(i>=s.size()){
            ans.push_back(op);
            return;
        }

        if(isdigit(s[i])){
            solve(s,op+s[i],i+1,ans);
        }else{
            char ch1=toupper(s[i]);
            char ch2=tolower(s[i]);
            solve(s,op+ch1,i+1,ans);
            solve(s,op+ch2,i+1,ans);
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