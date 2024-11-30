class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& str1, string& str2) {
        // Your code here
        if(str1.size() != str2.size())
        {
            return 0;
        }
    vector<int> count(26, 0);  // Array to count occurrences of each character

    // Increment count for str1 and decrement for str2
    for (int i = 0; i < str1.length(); ++i) {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; ++i) {
        if (count[i] != 0) {
            return false;
        }
    }
    
    return true;
    }
};
