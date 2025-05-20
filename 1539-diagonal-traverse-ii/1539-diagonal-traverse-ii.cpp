class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> answer;
        map<int, vector<int>> m;
        
        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j<nums[i].size(); j++) {
                m[i+j].push_back(nums[i][j]);
            }
        }
        for(auto &it:m){
            vector<int>temp=it.second;
            reverse(temp.begin(),temp.end());
            for(auto &i:temp) answer.push_back(i);
        }
        
        return answer;
    }
};