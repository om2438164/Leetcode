class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>arr(n);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            arr[i]=to_string(i+1);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            ans[i]=stoi(arr[i]);
        }
        return ans;
    }
};