class Solution {
  public:
    string convertToWords(int n) {
        // code here
        string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", 
                          "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", 
                         "Sixty", "Seventy", "Eighty", "Ninety"};
        string thousands[] = {"", "Thousand", "Million", "Billion"};
        
        // Helper function to process numbers less than 1000
        auto processHundreds = [&](int num) -> string {
            string result = "";
            if (num / 100 > 0) {
                result += ones[num / 100] + " Hundred";
                if (num % 100 != 0) {
                    result += " ";
                }
            }
            num %= 100;
            if (num > 10 && num < 20) {
                result += teens[num - 10];
            } else {
                if (num / 10 > 0) {
                    result += tens[num / 10];
                    if (num % 10 != 0) {
                        result += " ";
                    }
                }
                if (num % 10 > 0) {
                    result += ones[num % 10];
                }
            }
            return result;
        };

        // Edge case for zero
        if (n == 0) return "Zero";

        string result = "";
        int index = 0;

        // Process each group of three digits (thousands, millions, etc.)
        while (n > 0) {
            if (n % 1000 != 0) {
                string part = processHundreds(n % 1000);
                if (!result.empty()) {
                    result = part + " " + thousands[index] + " " + result;
                } else {
                    result = part + " " + thousands[index];
                }
            }
            n /= 1000;
            index++;
        }

        // Trim any extra spaces and return
        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};
