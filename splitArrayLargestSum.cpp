int splitArray(vector<int>& arr, int k) {
    // Step 1: Edge Case
    // If you can’t split, the entire array is one subarray.
    if (k == 1) {
        return accumulate(arr.begin(), arr.end(), 0);
    }

    // Step 2: Set the binary search range
    // Low: no subarray sum can be less than the max element.
    int low = *max_element(arr.begin(), arr.end());

    // High: no subarray sum can be more than the total sum.
    int high = accumulate(arr.begin(), arr.end(), 0);

    int answer = high; // Initial assumption

    // Step 3: Binary Search Loop
    while (low <= high) {
        // Find mid: this is our guess for max allowed subarray sum
        int mid = low + (high - low) / 2;

        // Start checking how many subarrays we need
        int count = 1;         // At least one subarray
        int currentSum = 0;    // Track sum of current subarray

        // Traverse the array
        for (int i = 0; i < arr.size(); i++) {
            // If adding this element keeps us under the guessed limit
            if (currentSum + arr[i] <= mid) {
                currentSum += arr[i]; // continue adding to the same subarray
            } else {
                count++;              // we need a new subarray
                currentSum = arr[i];  // start it with the current element
            }
        }

        // Step 4: Decide to go left or right in binary search
        if (count <= k) {
            // Valid split with ≤ k parts → try smaller value
            answer = mid;
            high = mid - 1;
        } else {
            // Too many parts → mid is too small → increase it
            low = mid + 1;
        }
    }

    // Step 5: Return the best found minimum max sum
    return answer;
}
