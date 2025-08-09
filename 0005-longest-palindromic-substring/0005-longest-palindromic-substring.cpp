class Solution {
public:
    bool ispalindrome(string &s,int start,int end){
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++,end--;
        }
        return true;
    }

    string solve(string &s,int i,int j){
        if(i>j) return "";


        // string temp=s;
        // temp.erase(0,1);
        // if(ispalindrome(temp)) return temp;
        // string temp2=s;
        // temp2.erase(temp2.size()-1,1);
        if(ispalindrome(s,i,j)){
            return s.substr(i,j-i+1);
        } 


        string a= solve(s,i+1,j);
        string b= solve(s,i,j-1);

        return (a.size()>b.size())? a:b;

    }
    string longestPalindrome(string s) {
        // int maxi=INT_MIN;
        // string ans="";
        // for(int i=0;i<s.size();i++){
        //     string temp="";
        //     for(int j=i;j<s.size();j++){
        //         temp+=s[j];
        //         if((j-i+1)>=maxi && ispalindrome(temp)){
        //             ans=temp;
        //             maxi=j-i+1;
        //         }
        //     }
        // }
        // return ans;
        return solve(s,0,s.size()-1);
    }
};