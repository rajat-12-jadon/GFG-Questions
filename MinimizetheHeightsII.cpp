class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
    int n = arr.size();
    if (n == 1) return 0;

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Compute the initial difference
    int result = arr[n - 1] - arr[0];

    // Step 3: Traverse and adjust heights
    int smallest, largest;
    for (int i = 0; i < n - 1; i++) {
        smallest = min(arr[0] + k, arr[i + 1] - k); // Minimum height after adjustment
        largest = max(arr[i] + k, arr[n - 1] - k); // Maximum height after adjustment

        // Update the result if the new difference is smaller
        if (smallest >= 0) { // Ensure no negative heights
            result = min(result, largest - smallest);
        }
    }

    return result;
    }
};
