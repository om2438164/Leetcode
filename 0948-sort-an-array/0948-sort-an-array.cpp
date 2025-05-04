class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>q;
        for(auto it:nums){
            q.push(-it);
        }
        int i=0;
        while(!q.empty()){
            nums[i++]=-q.top();
            q.pop();
        }
        return nums;
    }
};