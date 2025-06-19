class Solution {
public:
    string generateTag(string caption) {
        bool check=false;
        string result="#";
        int i=0;
        while(caption[i]==' '){
            i++;
        }
        for(;i<caption.size();i++){
            if(caption[i]==' '){
                check=true;
                continue;
            }
            if(!check){
                result.push_back(tolower(caption[i]));
            }else{
                result.push_back(toupper(caption[i]));
                check=false;
            }
            if(result.size()>=100) break;
        }
        return result;
    }
};