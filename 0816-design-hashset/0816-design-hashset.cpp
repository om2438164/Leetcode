class MyHashSet {
public:
    vector<bool>temp;
    MyHashSet() {
        temp.resize(1000001,false);
    }
    
    void add(int key) {
        temp[key]=true;
    }
    
    void remove(int key) {
        temp[key]=false;
    }
    
    bool contains(int key) {
        if(temp[key]==true) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */