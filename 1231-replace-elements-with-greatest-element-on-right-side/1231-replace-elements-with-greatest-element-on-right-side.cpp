class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=arr[arr.size()-1];
        vector<int>result(arr.size(),-1);

        for(int i=arr.size()-2;i>=0;i--){
            result[i]=maxi;
            maxi=max(arr[i],maxi);
        }
        return result;
    }
};