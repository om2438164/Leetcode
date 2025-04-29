class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int i=0,j=0,counter=0;
        while(i<word1.size() && j<word2.size()){
            if((counter&1)==0){
                result.push_back(word1[i++]);
            }else{
                result.push_back(word2[j++]);
            }
            counter++;
        }
        while(i<word1.size()){
            result.push_back(word1[i++]);
        }
        while(j<word2.size()){
            result.push_back(word2[j++]);
        }
        return result;
    }
};