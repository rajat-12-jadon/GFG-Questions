class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        int repeatCount = 1;
        string repeatedString = s1;

        // Repeat s1 until the length of the repeated string is greater than or equal to s2's length
        while (repeatedString.size() < s2.size()) {
            repeatedString += s1;
            repeatCount++;
        }

        // Check if s2 is a substring of the repeated string
        if (repeatedString.find(s2) != string::npos) {
            return repeatCount;
        }

        // Repeat one more time to handle edge case where s2 might span across boundaries
        repeatedString += s1;
        repeatCount++;

        // Check again if s2 is a substring of the repeated string
        if (repeatedString.find(s2) != string::npos) {
            return repeatCount;
        }

        // If we reach here, s2 cannot be formed from repeated s1
        return -1;
    }
};
