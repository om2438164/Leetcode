class Solution {
public:

    bool isPalindrome(string s) {
        string temp="";
        for(auto it:s){
            if((it>='a' && it<='z')||(it>='A' && it<='Z') || (it>='0' && it<='9')){
                temp.push_back(tolower(it));
            }
        }

        int low=0,high=temp.size()-1;
        while(low<high){
            if(temp[low]!=temp[high]){
                return false;
            }
            low++,high--;
        }
        return true;
        
    }
};