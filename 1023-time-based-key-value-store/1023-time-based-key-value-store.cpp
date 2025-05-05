class TimeMap {
public:
    //brute force solution

    // unordered_map<string,string>map;
    // TimeMap() {

    // }

    // void set(string key, string value, int timestamp) {
    //     string temp=key+'#'+to_string(timestamp);
    //     map[temp]=value;
    // }

    // string get(string key, int timestamp) {
    //     string temp=key+'#'+to_string(timestamp);
    //     if(map.count(temp)){
    //         return map[temp];
    //     }else{
    //         for(int i=timestamp;i>=1;i--){
    //             string temp=key+'#'+to_string(i);
    //             if(map.count(temp)) return map[temp];

    //         }

    //     }
    //     return "";


    // optimized solution 
    unordered_map<string, string> map;
    unordered_map<string,vector<int>>map2;
    TimeMap() {

    }

    void set(string key, string value, int timestamp) {
        string temp=key+'#'+to_string(timestamp);
        map[temp]=value;
        map2[key].push_back(timestamp);
    }

    string get(string key, int timestamp) {
        string temp=key+'#'+to_string(timestamp);
        if(map.count(temp)){
            return map[temp];
        }else{
            vector<int>&v=map2[key];
            int start=0,end=v.size()-1;
            int ans=-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(v[mid]<timestamp){
                    ans=v[mid];
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
            if (ans != -1) {
                string temp = key + '#' + to_string(ans);
                return map[temp];
            }

        }
        return "";
}
}
;

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */