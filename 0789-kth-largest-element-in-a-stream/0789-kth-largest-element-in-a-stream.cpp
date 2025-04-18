class KthLargest {
public:
    priority_queue<int>q;
    int m_k;
    KthLargest(int k, vector<int>& nums) {
        m_k=k;
        for (int num : nums) {
            q.push(-1 * num);
            if (q.size() > m_k) {
                q.pop();
            }
        }
    }
    
    int add(int val) {
        q.push(-1* val);
        if(q.size()>m_k){
            q.pop();
        }
        return -q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */