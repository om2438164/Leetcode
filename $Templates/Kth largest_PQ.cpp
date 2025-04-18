int findKthLargest(vector<int>& nums, int k) {

    // it takes O(nlogn) TC. but there is no need to sort the complete array

    // sort(nums.begin(),nums.end());
    // return nums[nums.size()-k];

    // using priority queue 
    // takes O(nlogk) TC 

    // this approach handles the edge cases
    priority_queue<int>q;
    for (int num : nums) {
            q.push(-1 * num);
            if (q.size() > k) {
                q.pop();
            }
        }
    return (-1* q.top());


// alternate approach but it does not handle the edge case where nums.size()<k
    priority_queue<int>q;
    for(int i=0;i<k;i++){
        q.push(-1*nums[i]);
    }
    for(int i=k;i<nums.size();i++){
        if(nums[i]>(-1*q.top())){
            q.pop();
            q.push(-1*nums[i]);
        }
    }
    return (-1* q.top());


}
