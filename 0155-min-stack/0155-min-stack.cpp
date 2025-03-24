class MinStack {
public:
    vector<int>v;
    int peak;
    MinStack() {
        peak=-1;
    }
    
    void push(int val) {
        v.push_back(val);
        peak++;
    }
    
    void pop() {
        if (peak >= 0) {
            v.pop_back();
            peak--;
        }
    }
    
    int top() {
        if (peak >= 0) return v[peak];
        return -1;
    }
    
    int getMin() {
       if (!v.empty()) return *min_element(v.begin(), v.end());
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */