class Solution {
  public:
    string reverseString(string& s) {
        // Your code goes here
        int start = 0, end = s.size() - 1;
        while(start< end)
        {
            swap(s[start], s[end]);
            start++, end--;
        }
        return s;
    }
};
