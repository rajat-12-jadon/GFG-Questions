class Solution {
public:
    string intToRoman(int num) {
        string thousands[] = {"", "M", "MM", "MMM"};
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
        // Extract digits for thousands, hundreds, tens, and ones
        string result = "";
        result += thousands[num / 1000]; // Thousands place
        num %= 1000;
        
        result += hundreds[num / 100]; // Hundreds place
        num %= 100;
        
        result += tens[num / 10]; // Tens place
        num %= 10;
        
        result += ones[num]; // Ones place
        
        return result;
    }
};
