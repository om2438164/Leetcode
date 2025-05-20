class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        vector<int>nextSmaller(prices.size());
        for(int i=prices.size()-1;i>=0;i--){
            while(!st.empty() && prices[i]<st.top()){
                st.pop();
            }
            if(st.empty()){
                nextSmaller[i]=-1;
            }else{
                nextSmaller[i]=st.top();
            }
            st.push(prices[i]);    
        }
        for(int i=0;i<nextSmaller.size();i++){
            if(nextSmaller[i]==-1) nextSmaller[i]=prices[i];
            else nextSmaller[i]=prices[i]-nextSmaller[i];
        }
        return nextSmaller;
        
    }
};