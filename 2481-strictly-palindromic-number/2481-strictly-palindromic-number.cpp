class Solution {
public:

    bool ispalindrome(long long n){
        string str=to_string(n);
        int start=0,end=str.size()-1;
        while(start<=end){
            if(str[start]!=str[end])return false;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            int temp=n;
            long long ans=0;
            while(n>0){
                ans=ans*10+(n%i);
                n=n/i;

            }
            if(!ispalindrome(ans)) return false;
        }
        return true;
    }
};