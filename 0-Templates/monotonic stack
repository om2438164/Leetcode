vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1); // Store result (-1 if no greater element)
    stack<int> st; // Monotonic decreasing stack (stores indices)

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            res[st.top()] = nums[i]; // Update result for previous element
            st.pop(); // Remove processed element
        }
        st.push(i); // Push current index into the stack
    }
    return res;
}

vector<int> nextSmallerElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1); // Store result (-1 if no smaller element)
    stack<int> st; // Monotonic increasing stack (stores indices)

    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] > nums[i]) {
            res[st.top()] = nums[i]; // Update result for previous element
            st.pop(); // Remove processed element
        }
        st.push(i); // Push current index into the stack
    }
    return res;
}