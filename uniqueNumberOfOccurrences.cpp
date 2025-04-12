class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> freq;
        
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        
        unordered_set<int> freqSet;
        
        for (auto it = freq.begin(); it != freq.end(); ++it) 
        {
            if (freqSet.find(it->second) != freqSet.end()) 
            {
                return false;
            }
            freqSet.insert(it->second);
        }
        
        return true;
        
    }
};
