class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days;

        sort(meetings.begin(), meetings.end());

        int busyDays = 0, prevEnd = 0;

        for (int i = 0; i < meetings.size(); i++) 
        {
            int start = meetings[i][0], end = meetings[i][1];
            
            if (start > prevEnd + 1) 
            {
                busyDays += (end - start + 1);
            }
            else if (end > prevEnd) 
            {
                busyDays += (end - prevEnd);
            }
            prevEnd = max(prevEnd, end); 
        }
        return days - busyDays;
    }
};
