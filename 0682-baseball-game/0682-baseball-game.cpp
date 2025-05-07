class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for (auto it : operations) {
            if (it == "C") {
                if (!s.empty())
                    s.pop();
            } else if (it == "D") {
                if (!s.empty()) {
                    int temp1 = s.top()*2;
                    s.push(temp1);
                }
            } else if (it == "+") {
                if (!s.empty()) {
                    int temp1 = s.top();
                    s.pop();
                    int temp2 = temp1 + s.top();
                    s.push(temp1);
                    s.push(temp2);
                }
            } else {
                s.push(stoi(it));
            }
        }
        int ans = 0;
        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};