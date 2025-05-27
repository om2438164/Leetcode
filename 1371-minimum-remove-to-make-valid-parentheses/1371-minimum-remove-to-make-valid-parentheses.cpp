class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_map<int,int>map;
        stack<vector<string>>st;
        for(int i=0;i<s.size();i++){
            if(st.empty() && s[i]==')'){
                map[i]++;
                continue;
            }
            if(s[i]=='('){
                st.push({to_string(s[i]),to_string(i)});
                continue;
            }
            if(s[i]==')'){
                st.pop();
            }
        }
        while(!st.empty()){
            map[stoi(st.top()[1])]++;
            st.pop();
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(!map.count(i)){
                ans+=s[i];
            }
        }
        return ans;
    }
};