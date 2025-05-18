class Solution {
public:
    string solve(int &n,int i,string &start){
        if(i==n) return start;
        string temp="";
        int count=1;
        for(int i=0;i<start.size()-1;i++){
            if(start[i]!=start[i+1]){
                temp+=to_string(count)+start[i];
                count=1;
            }else{
                count++;
            }
        }
            temp+=to_string(count)+start[start.size()-1];
            start=temp;
        return solve(n,i+1,start);
    }
    string countAndSay(int n) {
        string start="1";
        if(n==1) return start;
        int i=1;

        return solve(n,i,start);
    }
};