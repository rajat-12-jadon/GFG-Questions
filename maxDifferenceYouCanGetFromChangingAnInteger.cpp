class Solution {
public:
    int maxDiff(int num) {
        int maxVal = num;
        int minVal = num;

        string original_val = to_string(num);
        for(char d = '0'; d <= '9'; d++) 
        {
            string temp = original_val; 
            for(int i = 0; i < temp.length(); i++)   
            {
                if(temp[i] == d) 
                {
                    temp[i] = '9'; 
                }
            }
            maxVal = max(maxVal, stoi(temp));
        }

        for(char d = '0'; d <= '9'; d++) 
        {
            string temp = original_val; 
            char replaceWith;

            if (temp[0] == d) replaceWith = '1';
            else replaceWith = '0';

            for (int i = 0; i < temp.length(); i++) 
            {
                if (temp[i] == d) 
                {
                    temp[i] = replaceWith; // if there are same character with start then, all are 1s not 0s. 
                }
            }
            if(temp[0] != '0')
            {
                minVal = min(minVal, stoi(temp));
            }
        }
        return maxVal - minVal;
    }
};
