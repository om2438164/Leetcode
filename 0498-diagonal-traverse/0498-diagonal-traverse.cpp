class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int size = 0;
        vector<int> ans;
        bool check=false;
        int cols = mat[0].size();
        int i = 0;
        while (i < mat.size()) {
            if (i % 2 == 1) {
                vector<int> v;
                int temp = i, j = 0;
                while (temp >= 0 && j <  cols) {
                    v.push_back(mat[temp--][j++]);
                }
                reverse(v.begin(), v.end());
                for (auto& it : v)
                    ans.push_back(it);
                i++;
                check=false;

            } else {
                int temp = i, j = 0;
                while (temp >= 0 && j <  cols) {
                    ans.push_back(mat[temp--][j++]);
                }
                i++;
                check=true;
            }
        }
        i--;
        int j = 1;
        while (j <  cols) {
            if (check) {
                vector<int> sample;
                int temp = j;
                int temp2 = i;
                while (temp <  cols && temp2 >= 0) {
                    sample.push_back(mat[temp2--][temp++]);
                }
                reverse(sample.begin(),sample.end());
                for (auto& it : sample)
                    ans.push_back(it);
                j++;
                check=false;

            } else {
                int temp = j;
                int temp2 = i;
                while (temp <  cols && temp2 >= 0) {
                    ans.push_back(mat[temp2--][temp++]);
                }
                check=true;
                j++;
            }
        }

        
        return ans;
    }
};