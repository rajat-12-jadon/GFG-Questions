class Solution {
  public:
    // Function to build the LPS (Longest Prefix Suffix) array for the pattern
    vector<int> buildLPSArray(const string& pat) {
        int m = pat.length();
        vector<int> lps(m, 0);
        int len = 0; // Length of the previous longest prefix suffix
        int i = 1;

        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];  // Use LPS to skip comparisons
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;  // Return the LPS array to use it in the search function
    }

    // Function to search the pattern in the text using KMP algorithm
    vector<int> search(string& pat, string& txt) {
        vector<int> result;
        int n = txt.length();
        int m = pat.length();

        // Step 1: Build the LPS array for the pattern
        vector<int> lps = buildLPSArray(pat);

        int i = 0; // index for txt[]
        int j = 0; // index for pat[]

        // Step 2: Start matching the pattern in the text
        while (i < n) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }

            if (j == m) {
                result.push_back(i - j);  // A match is found, add the index
                j = lps[j - 1];  // Use the LPS to skip unnecessary comparisons
            } else if (i < n && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];  // Use the LPS array to skip comparisons
                } else {
                    i++;
                }
            }
        }

        return result;  // Return the list of indices where the pattern matches in the text
    }
};
