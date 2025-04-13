class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for(auto it:s){
            if(it=='*'){
                st.pop();
            }else{
                st.push(it);
            }
        }
        string temp="";
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};