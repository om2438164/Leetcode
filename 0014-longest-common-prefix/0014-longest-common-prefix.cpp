class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            if(strs[i].size()<ans.size()){
                ans=strs[i];
            }
        }
        
        for(auto it:strs){
            string temp="";
            for(int i=0;i<it.size() && i<ans.size() ;i++){
               
                if(it[i]==ans[i]){
                    temp.push_back(it[i]);
                }else{
                    break;
                }
            }
            ans=temp;
        }

        return ans;
    }
};