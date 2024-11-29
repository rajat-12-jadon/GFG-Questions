class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        // code here
    int n = arr.size();
    if (n == 1) return 0; // No difference if there's only one tower

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Compute the initial difference
    int result = arr[n - 1] - arr[0];    
    for (int i = 0; i < n - 1; i++) 
    {
        // Smallest and largest heights after adjustment
        int smallest = min(arr[0] + k, arr[i + 1] - k);
        int largest = max(arr[i] + k, arr[n - 1] - k);

        // Update the result with the smallest difference
        result = min(result, largest - smallest);
    }

    return result;
    }
};
