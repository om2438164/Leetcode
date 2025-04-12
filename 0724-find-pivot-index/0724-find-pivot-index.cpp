class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0) return -1;
        vector<int>temp1(nums.size());
        vector<int>temp2(nums.size());
        temp1[0]=0;
        int sum=0;
        for(int i=1;i<nums.size();i++){
            sum=sum+nums[i-1];
            temp1[i]=sum;
        }

        int n=nums.size();
        temp2[n-1]=0;
        int sum2=0;
        for(int i=n-2;i>=0;i--){
            sum2=sum2+nums[i+1];
            temp2[i]=sum2;
        }

        for(int i=0;i<nums.size();i++){
            if(temp1[i]==temp2[i]) return i;
        }
        return -1;
    }
};