class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        // Your code goes here
        int n = s.size();
        vector<int> lps(n, 0); // LPS array

        // Compute the LPS array
        int len = 0; // Length of the previous longest prefix suffix
        int i = 1;

        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    // Fall back to the previous longest prefix suffix
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // The last value of the LPS array is the answer
        return lps[n - 1];
    }
};
