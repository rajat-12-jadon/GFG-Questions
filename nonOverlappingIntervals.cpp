class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] < b[1];
        });
        
        int end = INT_MIN; // Tracks the end time of the last included interval
        int removals = 0; // Counter for intervals to remove
        
        for (const auto &interval : intervals) {
            if (interval[0] < end) {
                // Overlap detected, remove the current interval
                removals++;
            } else {
                // Update the end to the current interval's end
                end = interval[1];
            }
        }
        
        return removals;
    }
};
