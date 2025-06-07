class Solution {
public:
    vector<vector<string>>ans;
    bool ispalin(string& s){
        int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++,end--;
        }
        return true;
    }
    void solve(string& s,int start,vector<string>&temp){
        if(start>=s.size()){
            ans.push_back(temp);
            return;
        }
        string str="";
        for(int i=start;i<s.size();i++){
            str+=s[i];
            if(ispalin(str)){
                temp.push_back(str);
                solve(s,i+1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        int start=0;
        solve(s,start,temp);
        return ans;
    }
};