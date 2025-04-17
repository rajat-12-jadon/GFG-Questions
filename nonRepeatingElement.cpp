class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int, int> freq;
        
        for(int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            if(it -> second == 1)
            {
                return it -> first;
            }
        }
        return 0;
    }
};
