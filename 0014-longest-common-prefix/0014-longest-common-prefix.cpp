class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string ans=strs[0];
        // for(int i=1;i<strs.size();i++){
        //     if(strs[i].size()<ans.size()){
        //         ans=strs[i];
        //     }
        // }

        // for(auto it:strs){
        //     string temp="";
        //     for(int i=0;i<it.size() && i<ans.size() ;i++){

        //         if(it[i]==ans[i]){
        //             temp.push_back(it[i]);
        //         }else{
        //             break;
        //         }
        //     }
        //     ans=temp;
        // }

       string ans=strs[0];
       
        for(int i=1;i<strs.size();i++){
            string result="";
            for(int j=0;j<strs[i].size() && j<ans.size();j++){
                if(ans[j]==strs[i][j]){
                    result.push_back(ans[j]);
                }else break;
                
            }
            ans=result;
        }

        return ans;
    }
};