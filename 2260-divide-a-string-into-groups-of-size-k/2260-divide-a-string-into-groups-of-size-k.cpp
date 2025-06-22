class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;

        string temp="";
        for(auto &it:s){
            temp+=it;
            if(temp.size()==k){
                ans.push_back(temp);
                temp="";
            }
        }
        if(!temp.empty()) ans.push_back(temp);
        while(ans.back().size()<k){
            ans.back().push_back(fill);
        }
        return ans;

    }
};