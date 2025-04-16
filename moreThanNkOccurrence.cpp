class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        unordered_map<int, int> freq;
    
        for (int i = 0; i < n; i++) 
        {
            freq[arr[i]]++;
        }
    
        int count = 0;
        for (auto it : freq) 
        {
            if (it.second > n / k) 
            {
                count++;
            }
        }
    
        return count;
    }
};
