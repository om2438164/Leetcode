class Solution {
public:

    bool check(vector<int>&piles,int mid, int k){
        int count=0,temp=k;
        for(int i=0;i<piles.size();i++){
            int ele=piles[i];
            if(ele%mid==0) count+=ele/mid;
            else count+=(ele/mid)+1;
            if(count>k) return false;
        }
        return true;
    }



    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=INT_MIN;
        for(auto it:piles) maxi=max(maxi,it);

        int start=1,end=maxi;
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(piles,mid,h)){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};