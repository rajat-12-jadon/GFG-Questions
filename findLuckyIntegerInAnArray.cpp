class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        int n = arr.size();

        for (int i = 0; i < n; i++) 
        {
            freq[arr[i]]++;
        }

        int luckyNumber = -1;

        for (auto it = freq.begin(); it != freq.end(); it++) 
        {
            if (it->first == it->second) 
            {
                luckyNumber = max(luckyNumber, it->first);
            }
        }
        return luckyNumber;
    }
};
