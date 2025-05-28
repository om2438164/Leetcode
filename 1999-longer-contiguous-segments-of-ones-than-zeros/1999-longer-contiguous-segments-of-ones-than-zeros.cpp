class Solution {
public:
    bool checkZeroOnes(string s) {
        int onecount=0;
        int ones=0;
        for(auto &it:s){
            if(it=='1') onecount++;
            else {
                ones=max(ones,onecount);
                onecount=0;
            }
        }
        ones=max(ones,onecount);
        int zerocount=0;
        int zeros=0;
        for(auto &it:s){
            if(it=='0') zerocount++;
            else{
                zeros=max(zeros,zerocount);
                zerocount=0;
            } 
        }
        zeros=max(zeros,zerocount);
        cout<<zeros<<endl;
        cout<<ones<<endl;
        return (ones>zeros)?1:0;
    }
};