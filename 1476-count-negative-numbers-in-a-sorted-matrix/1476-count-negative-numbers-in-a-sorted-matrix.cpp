class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto it:grid){
            for(int i=0;i<it.size();i++){
                if(it[i]<0) count++;
            }
        }
        return count;
    }
};