class Solution {
  public:
    int count(vector<int>& arr, int target) {
        // code here
        int count = 0;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == target)
            {
                count++;
            }
        }
        return count;
    }
};
