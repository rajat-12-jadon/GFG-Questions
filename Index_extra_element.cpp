class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int start = 0, end = n - 2;
        int mid;
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if (arr1[mid] != arr2[mid]) 
            {
                end = mid - 1;
            } 
            else
            {
                start = mid + 1;
            }
        }
        return start;
    }
};
