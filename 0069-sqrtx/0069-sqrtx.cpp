class Solution {
public:
    int mySqrt(int x) {
        // return pow(x,0.5);
        // sqrt(x)

        if(x==0 || x==1) return x;
        int start=1,end=x/2;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==x/mid) return mid;
            else if(mid<(x/mid)){
                ans=mid;
                start=mid+1;
            }else end=mid-1;
        }
        return ans;
    }
};