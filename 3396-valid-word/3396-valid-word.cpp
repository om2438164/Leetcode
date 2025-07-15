class Solution {
public:
    bool isVowel(char &ch){
        ch=tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }
    bool isValid(string word) {
        bool vowel=false,consonenet=false;
        if(word.size()<3) return false;
        for(auto &it:word){
            if(isalpha(it)){
                if(isVowel(it)) vowel=true;
                else consonenet=true;
            }else if(!isdigit(it)){
                return false;
            }
        }
        if(vowel && consonenet) return true;
        return false;
    }
};