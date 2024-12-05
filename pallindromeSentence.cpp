class Solution {
  public:
    bool sentencePalindrome(string &s) {
        // code here
        string filtered = "";

        // Step 1: Filter out non-alphanumeric characters and convert to lowercase
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) { // Check if character is alphanumeric
                filtered += tolower(s[i]); // Convert to lowercase
            }
        }

        // Step 2: Check if the filtered string is a palindrome using a normal for loop
        int n = filtered.size();
        for (int i = 0; i < n / 2; i++) {
            if (filtered[i] != filtered[n - i - 1]) {
                return false; // Not a palindrome
            }
        }

        return true;
    }
};
