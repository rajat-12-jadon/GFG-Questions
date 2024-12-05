class Solution {
  public:
    vector<string> fizzBuzz(int n) {
        // code here
         vector<string> result; // To store the result
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                result.push_back("Fizz");
            } else if (i % 5 == 0) {
                result.push_back("Buzz");
            } else {
                result.push_back(to_string(i)); // Convert the number to string
            }
        }
        return result;
    }
};
