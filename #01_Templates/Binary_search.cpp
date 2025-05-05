int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (nums[mid] == target) return mid; // Found the target
        else if (nums[mid] < target) left = mid + 1; // Search in the right half
        else right = mid - 1; // Search in the left half
    }
    
    return -1; // Target not found
}


// Binary search standard problem pages maximum of minimum or painter problem 

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
            int sum=0,start=INT_MIN;
            for(auto it:weights) {
                sum+=it;
                start=max(start,it);
            }
    
            int end=sum;
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