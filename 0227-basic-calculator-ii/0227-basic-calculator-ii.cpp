class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char op='+';
        int num=0;
        for (int i = 0; i < s.size(); i++) {
            char ch=s[i];
            if (isdigit(ch)) {
                num=num*10+(ch-'0');
            }
            if ((!isdigit(ch) && ch!=' ') || i==s.size()-1) {
                if (op == '+') {
                    st.push(num);
                } else if (op == '-') {
                    st.push(-num);
                } else if (op == '*') {
                    int temp=st.top(); st.pop();
                    st.push(temp * num);
                } else if (op == '/') {
                    int temp=st.top(); st.pop();
                    st.push(temp / num);
                }
                op=ch; 
                num=0;
            }
        }
        int res=0;
        while (!st.empty()) {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};