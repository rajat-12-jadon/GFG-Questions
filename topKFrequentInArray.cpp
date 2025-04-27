class Solution {
  public:
    vector<int> topKFrequent(vector<int> &arr, int k) {
        // Your code here
        vector<int> result;
        unordered_map<int, int> freq;
        
        for(int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        
        vector<pair<int, int>> freqVec;
        
        for (auto it = freq.begin(); it != freq.end(); it++) 
        {
            freqVec.push_back({it->second, it->first});
        }
        
        sort(freqVec.begin(), freqVec.end(), greater<pair<int, int>>());
        
        for (int i = 0; i < k; i++) 
        {
            result.push_back(freqVec[i].second);
        }
        
        return result;
    }
};
