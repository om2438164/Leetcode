class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int i = 0;

        while (i < path.size()) {
            // Skip multiple slashes
            while (i < path.size() && path[i] == '/') i++;
            if (i == path.size()) break;

            int j = i;
            while (j < path.size() && path[j] != '/') j++;

            string temp = path.substr(i, j - i);

            if (temp == "..") {
                if (!st.empty()) st.pop();
            } else if (temp != "." && !temp.empty()) {
                st.push(temp);
            }

            i = j;
        }

        vector<string>parts;
        while(!st.empty()){
            parts.push_back(st.top());
            st.pop();
        }
        string result;
        for(int i=parts.size()-1;i>=0;i--){
            result+='/'+parts[i];
        }
        return (result.empty())? "/":result;
    }
};