class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int j=0,i=0;
        double sum=0;
        while(j<k){
            sum+=nums[j];
            j++;
        }
        double avg=sum/k;
        // cout<<sum;
        double maxi=avg;
        while(j<nums.size()){
            sum+=nums[j];
            sum-=nums[i];
            avg=sum/k;
            maxi=max(maxi,avg);
            i++;j++;
        }
        return maxi;
    }
};