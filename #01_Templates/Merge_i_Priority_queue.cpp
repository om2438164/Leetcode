#include <bits/stdc++.h>
using namespace std;

bool solveLineSweep(vector<vector<int>>& intervals, int limit) {
    // Sort intervals by start time
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0]; // or a[1] < b[1] depending on problem
    });

    // Min heap to store {endTime, value}
    priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;

    int sum = 0; // running sum or count of active intervals

    for (auto& interval : intervals) {
        int start = interval[0];
        int end = interval[1];
        int value = interval[2]; // number of passengers, meeting room, etc.

        // Remove all expired intervals
        while (!pq.empty() && pq.top()[0] <= start) {
            sum -= pq.top()[1];
            pq.pop();
        }

        // Add current interval
        pq.push({end, value});
        sum += value;

        // Custom logic
        if (sum > limit) return false; // Or update max count, etc.
    }

    return true; // Or return final result
}
