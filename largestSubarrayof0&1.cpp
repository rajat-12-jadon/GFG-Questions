class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> prefixMap;
        int prefix_sum = 0;
        int max_length = 0;
        int n = arr.size();
        
        prefixMap[0] = -1;
        
        for(int i = 0; i < n; i++)
        {
            prefix_sum += (arr[i] == 0 ? -1 : 1);
            
            if(prefixMap.find(prefix_sum) != prefixMap.end())
            {
                max_length = max(max_length, i - prefixMap[prefix_sum]);
            }
            else
            {
                prefixMap[prefix_sum] = i;                
            }
        }
        return max_length;
    }
};
