class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3] = {0};
        int left = 0, right = 0, total = 0;
        int n = s.length();
    
        for (right = 0; right < n; right++) 
        {
            count[s[right] - 'a']++;
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) 
            {
                total += (n - right);
                count[s[left] - 'a']--;
                left++;
            }
        }
        return total;
    }
};
