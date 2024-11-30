class Solution {
public:
    string addBinary(string s1, string s2) {
    s1.erase(0, s1.find_first_not_of('0'));
    s2.erase(0, s2.find_first_not_of('0'));
    

    if (s1.empty()) {
        s1 = "0";
    }
    if (s2.empty()) {
        s2 = "0";
    }
    
    string result = "";
    int carry = 0;
    int i = s1.size() - 1;
    int j = s2.size() - 1;


    while (i >= 0 || j >= 0 || carry > 0) {
        int bit1 = 0;
        if (i >= 0) {
            bit1 = s1[i] - '0';
            i--;
        }

        int bit2 = 0;
        if (j >= 0) {
            bit2 = s2[j] - '0';
            j--;
        }

        int sum = bit1 + bit2 + carry;
        result += (sum % 2) + '0'; 
        carry = sum / 2;          
    }

    
    reverse(result.begin(), result.end());
    return result;
    }
};
