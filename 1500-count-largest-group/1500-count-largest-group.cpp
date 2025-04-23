class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,vector<int>>map;
        vector<vector<int>>temp;
        for(int i=1;i<=n;i++){
            int sum=0;
            int num=i;
            while(num>0){
                sum+=(num%10);
                num/=10;
            }
            map[sum].push_back(i);
        }
        priority_queue<int>q;
        for(auto it:map){
            q.push(it.second.size());
        }
        int maxi=q.top();
        int count=0;
        for(auto it:map){
            if(it.second.size()==maxi) count++;
        }
        return count;

    }
};