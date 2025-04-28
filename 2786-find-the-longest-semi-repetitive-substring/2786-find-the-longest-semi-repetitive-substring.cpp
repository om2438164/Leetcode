class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        if(s.size()==1) return 1;
        int i=0,j=1;
        bool check=false;
        int sample=-1;
        int ans=0;
        while(j<s.size()){
            if(s[j]==s[j-1]){
                if(check){
                    i=sample;
                    sample=j;
                }else{
                    sample=j;
                    check=true;
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};