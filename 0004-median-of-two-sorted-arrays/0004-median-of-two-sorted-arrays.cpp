class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>ans(nums1);
        // for(auto it:nums2) ans.push_back(it);
        // sort(ans.begin(),ans.end());
        vector<int>ans;
        int first=0,second=0;
        while(first<nums1.size() && second<nums2.size()){
            if(nums1[first]<nums2[second]){
                ans.push_back(nums1[first]);
                first++;
            } 
            else if(nums1[first]>nums2[second]){
                ans.push_back(nums2[second]);
                second++;
            }
            else{
                ans.push_back(nums1[first]);
                ans.push_back(nums2[second]);
                first++,second++;
            }
        }

        while(first<nums1.size()){
            ans.push_back(nums1[first]);
                first++;
        }
        while(second<nums2.size()){
            ans.push_back(nums2[second]);
                second++;
        }

        for(auto it:ans) cout<<it<<endl;


        if(ans.size()%2!=0) return ans[ans.size()/2];
        int sample=ans.size()/2;
        double temp=double (ans[sample]+ans[sample-1])/2;
        return temp;
        
    }
};