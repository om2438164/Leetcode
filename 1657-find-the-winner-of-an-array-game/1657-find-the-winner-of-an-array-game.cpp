class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int curr = arr[0];
        int winCount = 0;
        
        if(k >= arr.size()) {
            return *max_element(arr.begin(), arr.end());
        }
        
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > curr) {
                curr = arr[i];
                winCount = 1;
            } else {
                winCount++;
            }
            if(winCount == k) return curr;
        }
        return curr;
    }
};
