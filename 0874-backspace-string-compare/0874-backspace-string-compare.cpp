class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st2;
        for(auto &it:s){
            if(it=='#'){
                if(!st.empty()) st.pop();
                
            }else st.push(it);
        }
        for(auto &it:t){
            if(it=='#'){
                if(!st2.empty()) st2.pop();
            }else st2.push(it);
        }
        return st==st2;

    }
};