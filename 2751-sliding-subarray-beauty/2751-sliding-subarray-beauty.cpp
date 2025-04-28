class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        // vector<int>ans;

        // for(int i=0;i<=nums.size()-k;i++){
        //     priority_queue<int>q;
        //     for(int j=i;j<i+k;j++){
        //         if(nums[j]<0){
        //             q.push(nums[j]);
        //             if(q.size()>x){
        //                 q.pop();
        //             }
        //         }

        //     }
        //     if(q.size()==x) ans.push_back(q.top());
        //     else ans.push_back(0);

        // }
        // return ans;

        map<int, int> map;
        vector<int> ans;
        int j = 0;
        while (j < k) {
            if (nums[j] < 0) {
                map[nums[j]]++;
            }
            j++;
        }
        // validate first window
        if (map.size() != 0) {
            int index = 0;
            bool check = false;
            for (auto it : map) {
                index += it.second;
                if (index >= x) {
                    ans.push_back(it.first);
                    check = true;
                    break;
                }
            }
            if (!check)
                ans.push_back(0);
        } else {
            ans.push_back(0);
        }
        int i = 0;
        while (j < nums.size()) {
            if (map.count(nums[i])) {
                map[nums[i]]--;
                if (map[nums[i]] == 0)
                    map.erase(nums[i]);
            }
            if (nums[j] < 0) {
                map[nums[j]]++;
            }
            if (map.size() != 0) {
                int index = 0;
                bool check = false;
                for (auto it : map) {
                    index += it.second;
                    if (index >= x) {
                        ans.push_back(it.first);
                        check = true;
                        break;
                    }
                }
                if (!check)
                    ans.push_back(0);
            } else {
                ans.push_back(0);
            }

            i++, j++;
        }
        return ans;
    }
};