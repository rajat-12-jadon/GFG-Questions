class Solution {
public:
     
    int gcd(int a, int b) 
    {
        return b == 0 ? a : gcd(b, a % b);
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

        // Count frequencies
        for (int i = 0; i < deck.size(); i++) 
        {
            freq[deck[i]]++;
        }

        int result = 0;
        unordered_map<int, int>::iterator it;
        for (it = freq.begin(); it != freq.end(); ++it) 
        {
            result = gcd(result, it->second);
        }

        return result >= 2;
    }
};
