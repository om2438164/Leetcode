class Solution {
public:

    bool check(vector<int>&weights,int mid,int k){
        int currsum=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>mid) return false;
            currsum+=weights[i];
            if(currsum>mid){
                k--;
                currsum=weights[i];
                if(k<=0) return false;
            }
            
        }
       
        return true;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(auto it:weights) sum+=it;

        int start=0,end=sum;
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(weights,mid,days)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};