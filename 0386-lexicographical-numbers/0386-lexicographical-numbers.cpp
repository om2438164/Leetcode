class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=(i+1);
        }
        sort(arr.begin(),arr.end(),[&](int &a,int& b){
            string first=to_string(a);
            string second=to_string(b);
            return first<second;
        });
        
        return arr;
    }
};