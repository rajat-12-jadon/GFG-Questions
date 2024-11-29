class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int i = 0, n = strlen(s);
    // Step 1: Ignore leading whitespace
    while (i < n && s[i] == ' ') {
        i++;
    }

    // Step 2: Handle optional sign
    int sign = 1; // Default to positive
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Convert digits to an integer
    long result = 0; // Use long to handle overflow
    while (i < n && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');

        // Step 4: Handle overflow and underflow
        if (result * sign > INT_MAX) {
            return INT_MAX;
        }
        if (result * sign < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }

    // Step 5: Apply the sign and return
    return static_cast<int>(result * sign);
    }
};
