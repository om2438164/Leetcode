class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(auto it:s){
            if(it=='(') st.push(it);
            else if(it==')' && !st.empty()){
                st.pop();
                count++;
            }
        }
        count*=2;
        return s.size()-count;
    }
};