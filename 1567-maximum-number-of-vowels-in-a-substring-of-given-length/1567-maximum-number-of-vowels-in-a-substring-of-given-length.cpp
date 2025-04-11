class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int i=0,j=0,count=0;
        while(j<k){
            if(isVowel(s[j])) count++;
            j++;
        }
        int maxi=count;

        while(j<s.size()){
            if(isVowel(s[i])) count--;
            if(isVowel(s[j])) count++;
            maxi=max(maxi,count);
            j++,i++;
        }
        maxi=max(maxi,count);
        return maxi;
    }
};