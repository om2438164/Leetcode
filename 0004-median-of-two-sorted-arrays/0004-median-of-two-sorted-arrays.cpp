class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1);
        for(auto it:nums2) ans.push_back(it);
        sort(ans.begin(),ans.end());
        if(ans.size()%2!=0) return ans[ans.size()/2];
        int sample=ans.size()/2;
        double temp=double (ans[sample]+ans[sample-1])/2;
        return temp;
        
    }
};