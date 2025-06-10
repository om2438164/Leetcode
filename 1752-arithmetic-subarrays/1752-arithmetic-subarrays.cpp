class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;

        for(int i=0;i<l.size();i++){
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            bool check=true;
            int diff=temp[1]-temp[0];
            for(int k=1;k<temp.size();k++){
                if(temp[k]-temp[k-1]!=diff){
                    check=false;
                    break;
                }
            }
            (check)? ans.push_back(true):ans.push_back(false);
        }
        return ans;
    }
};