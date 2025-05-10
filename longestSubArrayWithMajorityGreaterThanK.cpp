class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        vector<int> newArray;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > k)
            {
                newArray.push_back(1);
            }
            else
            {
                newArray.push_back(-1);
            }
        }
        
        unordered_map<int, int> firstSeen;
        int currentSum = 0;
        int maxLength = 0;
    
        for (int index = 0; index < newArray.size(); ++index) 
        {
            currentSum += newArray[index];
    
            if (currentSum > 0) 
            {
                maxLength = index + 1;
            } 
            else 
            {
                if (firstSeen.find(currentSum - 1) != firstSeen.end()) 
                {
                    maxLength = max(maxLength, index - firstSeen[currentSum - 1]);
                }
            }
             
            if (firstSeen.find(currentSum) == firstSeen.end()) 
            {
                firstSeen[currentSum] = index;
            }
        }

        return maxLength;
    }
};
