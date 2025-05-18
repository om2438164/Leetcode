class Solution {
public:
    string finalString(string s) {
        while(s.find("i")!=string::npos){
           reverse(s.begin(),s.begin()+s.find("i"));
           s.erase(s.find("i"),1);
        }
        return s;
    }
};