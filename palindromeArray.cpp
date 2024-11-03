class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
         if(arr[i] != arr[j])
         {
             return false;
         }
         i++;
         j--;
        }
        return true;
    }
};
