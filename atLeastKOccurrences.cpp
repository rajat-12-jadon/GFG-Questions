class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // write code
        unordered_map<int, int> freq;
        
        for(int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
            
            if (freq[arr[i]] == k) 
            {
                return arr[i];
            }
        }
        return -1;
    }
};
