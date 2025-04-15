class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=INT_MIN;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1]&& arr[i]>arr[i+1]) ans=i;
        }
        return ans;
    }
};