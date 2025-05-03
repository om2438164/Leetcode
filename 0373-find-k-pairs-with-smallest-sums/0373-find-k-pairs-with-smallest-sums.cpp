class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
        // priority_queue<vector<int>> q;
        // vector<vector<int>> ans;
        // for (int i = 0; i < nums1.size(); i++) {
        //     for (int j = 0; j < nums2.size(); j++) {
        //         q.push({nums1[i] + nums2[j], nums1[i], nums2[j]});
        //         if (q.size() > k)
        //             q.pop();
        //     }
        // }
        // while (!q.empty()) {
        //     ans.push_back({q.top()[1], q.top()[2]});
        //     q.pop();
        // }
        // return ans;


 
        vector<vector<int>> result;
        if (nums1.empty() || nums2.empty() || k == 0) return result;

        // Min heap: {sum, i, j}
        priority_queue<vector<int>, vector<vector<int>>, greater<>> minHeap;

        for (int i = 0; i < nums1.size() && i < k; i++) {
            minHeap.push({nums1[i] + nums2[0], i, 0});
        }

        while (!minHeap.empty() && result.size() < k) {
            auto top = minHeap.top(); minHeap.pop();
            int i = top[1], j = top[2];
            result.push_back({nums1[i], nums2[j]});
            if (j + 1 < nums2.size()) {
                minHeap.push({nums1[i] + nums2[j + 1], i, j + 1});
            }
        }

        return result;
    }
};

