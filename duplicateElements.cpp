class Solution {
  public:
    void SortedDuplicates(int n, vector<int> &arr) {
        // code here
        unordered_map<int, int> freq;
        vector<int> result;
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            if(it -> second != 1)
            {
                result.push_back(it -> first);
            }
        }
        
        if(result.size() == 0) 
        {
            cout << -1 << endl;
            return;
        }
        
        sort(result.begin(), result.end());
        
        for(int i = 0; i < result.size(); i++) 
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
};
