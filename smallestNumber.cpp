class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if(s < 1 || s > 9 * d)
        {
            return "-1";
        }
        
        string result(d, '0');
        
        s -= 1;
        
        for(int i = d - 1; i > 0; i--)
        {
            if(s > 9)
            {
                result[i] = '9';
                s -= 9;
            }
            else
            {
                result[i] = '0' + s;
                s = 0;
            }
        }
        result[0] = '1' + s;
        
        return result;
    }
};
