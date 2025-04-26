class Solution {
public:
    bool check(string &s){
        int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++,end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(check(s)) return true;
        // for(int i=0;i<s.size();i++){
        //     string temp=s;
        //     temp.erase(i,1);
        //     if(check(temp)) return true;
        //     if()
        // }
        int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]){
                string temp1=s;
                temp1.erase(start,1);
                string temp2=s;
                temp2.erase(end,1);
                if(check(temp1) || check(temp2)) return true;
                else return false;
            }
            start++,end--;
        }
        return true;;
    }
};