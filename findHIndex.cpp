class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int hIndex = 0;
        sort(citations.begin(), citations.end());
        
        int n = citations.size();
        
        for (int i = n - 1; i >= 0; i--) 
        {
            if (citations[i] >= (n - i)) 
            {
                hIndex = n - i;
            }
            else
            break;
        }

        return hIndex;
    }
};
