class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        // Brute force 
        // unordered_map<char,int>map1;
        // unordered_map<char,int>map2;
        // int k=s1.size();
        // for(auto it:s1) map1[it]++;
        // for(int i=0;i<=s2.size()-k;i++){
        //     for(int j=i;j<i+k;j++){
        //         map2[s2[j]]++;
        //     }
        //     if(map1==map2) return true;
        //     map2.clear();
        // }
        // return false;
        
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        int k=s1.size();
        if (k > s2.size()) return false;
        for(auto it:s1) map1[it]++;
        int j=0;
        while(j<k){
            map2[s2[j]]++;
            j++;
        }
        int i=0;
        while(j<s2.size()){
            if(map1==map2) return true;
            map2[s2[j]]++;
            map2[s2[i]]--;
            if(map2[s2[i]]==0) map2.erase(s2[i]);
            i++,j++;
        }
        if(map1==map2) return true;
        return false;
    }
};