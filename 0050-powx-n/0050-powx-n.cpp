class Solution {
public:
    double findpow(double x,int n){
        if(n==0) return 1;
        if(n==1) return x;
        if(n%2!=0){
            double poww=1LL*findpow(x,n/2);
            return 1LL*poww*poww*x;
        }else{
            double pow=1LL*findpow(x,n/2);
            return 1LL*pow*pow;
        }
        
    }
    double myPow(double x, int n) {
        // using recurssion
        if(n==0) return 1;
        long long N=n;
        if(n>=0) return findpow(x,N);
        double temp=findpow(x,-N);
        return 1.0/temp;
    }
};
