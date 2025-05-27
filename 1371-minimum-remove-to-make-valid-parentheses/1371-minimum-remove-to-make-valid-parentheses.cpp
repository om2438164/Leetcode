// class Solution {
// public:
//     string minRemoveToMakeValid(string s) {

        // Brute force solution 2 pass

//         unordered_map<int,int>map;
//         stack<vector<string>>st;
//         for(int i=0;i<s.size();i++){
//             if(st.empty() && s[i]==')'){
//                 map[i]++;
//                 continue;
//             }
//             if(s[i]=='('){
//                 st.push({to_string(s[i]),to_string(i)});
//                 continue;
//             }
//             if(s[i]==')'){
//                 st.pop();
//             }
//         }
//         while(!st.empty()){
//             map[stoi(st.top()[1])]++;
//             st.pop();
//         }
//         string ans="";
//         for(int i=0;i<s.size();i++){
//             if(!map.count(i)){
//                 ans+=s[i];
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    std::string minRemoveToMakeValid(std::string s) {
        int leftCount = 0;
        int rightCount = 0;
        std::stack<char> stack;

        // Pass 1
        for (char ch : s) {
            if (ch == '(') {
                leftCount++;
            } else if (ch == ')') {
                rightCount++;
            }
            if (rightCount > leftCount) {
                rightCount--;
                continue;
            } else {
                stack.push(ch);
            }
        }

        std::string result = "";
        
        // Pass 2
        while (!stack.empty()) {
            char currentChar = stack.top();
            stack.pop();
            if (leftCount > rightCount && currentChar == '(') {
                leftCount--;
            } else {
                result += currentChar;
            }
        }

        // Reverse the result string
        std::reverse(result.begin(), result.end());
        return result;
    }
};