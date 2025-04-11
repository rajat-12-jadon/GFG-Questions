class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for(int i = low; i <= high; i++)
        {
            string s = to_string(i);
            int digit = s.length();

            if(digit % 2 == 0)
            {
                int firstHalf = 0;
                int secondHalf = 0;

                for(int i = 0; i <= (digit / 2 - 1); i++)
                {
                    firstHalf += s[i];
                }
                for(int i = digit / 2; i <= (digit- 1); i++)
                {
                    secondHalf += s[i];
                }

                if(firstHalf == secondHalf)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
