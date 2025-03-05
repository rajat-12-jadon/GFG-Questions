class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        string result = "";
        int carry = 0;
        int i = s1.size() - 1, j = s2.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) 
        {
            int digit1 = (i >= 0) ? s1[i] - '0' : 0;
            int digit2 = (j >= 0) ? s2[j] - '0' : 0;
            
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result.push_back((sum % 10) + '0');

            i--; 
            j--;
        }
        reverse(result.begin(), result.end());
        int start = 0;
        while (start < result.size() - 1 && result[start] == '0') 
        {
            start++;
        }
        result = result.substr(start);
        return result; 
    }
};
