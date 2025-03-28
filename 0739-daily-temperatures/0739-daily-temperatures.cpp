class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // brute force-----------
        // vector<int>ans(temperatures.size(),0);
        // for(int i=0;i<temperatures.size()-1;i++){
        //     int count=0;
        //     bool check=false;
        //     for(int j=i+1;j<temperatures.size() && check==false;j++){
        //         if(temperatures[j]>temperatures[i]){
        //             ans[i]=count+1;
        //             check=true;
        //         }
        //         count++;
        //     }
        // }
        // return ans;

        // using stack -----------
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<vector<int>> st; 
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top()[1] <= temperatures[i]) {
                st.pop();
            }
            
            if (!st.empty()) {
                ans[i] = st.top()[0] - i;
            }

            st.push({i, temperatures[i]});
        }

        return ans;
    }
};
