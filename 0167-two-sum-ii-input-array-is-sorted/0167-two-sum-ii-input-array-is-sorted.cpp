class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans(2,-1);
        int low=0,high=numbers.size()-1;
        while(low<high){
            if(numbers[low]+numbers[high]== target){
                ans[0]=low+1;
                ans[1]=high+1;
                break;
            }else if(numbers[low]+numbers[high]> target){
                high--;
            }else{
                low++;
            }
        }
        return ans;
    }
};