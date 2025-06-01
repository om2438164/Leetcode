class Solution {
public:
    bool ispalindrome(string &s){
        int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++,end--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxi=INT_MIN;
        string ans="";
        for(int i=0;i<s.size();i++){
            string temp="";
            for(int j=i;j<s.size();j++){
                temp+=s[j];
                if((j-i+1)>=maxi && ispalindrome(temp)){
                    ans=temp;
                    maxi=j-i+1;
                }
            }
        }
        return ans;
    }
};