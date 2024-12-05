class Solution {
  public:
    vector<string> camelCase(vector<string> &arr, string &pat) {
        // code here
        vector<string> result; // To store matching strings

        // Iterate through each string in the array using an index-based loop
        for (int i = 0; i < arr.size(); i++) {
            string uppercasePattern = "";

            // Extract uppercase letters from the current string
            for (int j = 0; j < arr[i].size(); j++) {
                if (isupper(arr[i][j])) { // Check if character is uppercase
                    uppercasePattern += arr[i][j];
                }
            }

            // Check if the extracted uppercase pattern matches the given pattern
            bool matches = true;
            for (int k = 0; k < pat.size(); k++) {
                if (k >= uppercasePattern.size() || pat[k] != uppercasePattern[k]) {
                    matches = false;
                    break;
                }
            }

            // If the pattern matches, add the original string to the result
            if (matches) {
                result.push_back(arr[i]);
            }
        }

        // If no match is found, return a vector 

        return result;
    }
};
