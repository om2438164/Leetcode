class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(-1);
            }else{
                if(st.top()==-1){
                    int num=1;
                    st.pop();
                    while(!st.empty() && (st.top()!=-1 && st.top()!=-2)){
                        num+=st.top();
                        st.pop();
                    }
                    st.push(num);
                }else{
                    int num=st.top()*2;
                    st.pop();
                    st.pop();
                    while(!st.empty() && (st.top()!=-1 && st.top()!=-2)){
                        num+=st.top();
                        st.pop();
                    }
                    st.push(num);
                }
            }
        }
        return st.top();
    }
};