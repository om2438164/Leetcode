class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string>s1;
        vector<string>ans;
        unordered_map<string,int>map;
        int j=0,i=0;
        string temp="";
        while(j<10){
            temp.push_back(s[j]);
            j++;
        }
        map[temp]++;
        while(j<s.size()){
            temp.erase(0,1);
            temp.push_back(s[j]);
            if(map.count(temp)){
                s1.insert(temp);
                cout<<j<<endl;
            } 
            else map[temp]++;
            j++,i++;
        }
        for(auto it:s1){
            ans.push_back(it);
        }
        return ans;
    }
};