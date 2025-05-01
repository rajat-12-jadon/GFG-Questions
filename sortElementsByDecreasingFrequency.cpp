class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
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
        
        sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b){
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });
        
        for(auto& p : freqVec) 
        {
            for(int i = 0; i < p.first; i++) 
            {
                result.push_back(p.second);
            }
        }
        return result;
    }
};
