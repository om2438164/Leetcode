class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0;
        for(int i=m;i<=n;i=i+m){
            num2+=i;
        }
        num1=(n*(n+1))/2;
        num1-=num2;
        return num1-num2;
    }
};