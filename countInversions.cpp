class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
        // Your Code Here

  private:
    // Function to merge two halves and count inversions
    long long mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        int i = left;    // Starting index for left subarray
        int j = mid + 1; // Starting index for right subarray
        int k = 0;       // Index for the temporary array
        long long invCount = 0;

        vector<int> temp(right - left + 1); // Temporary array to store sorted elements

        while (i <= mid && j <= right) 
        {
            if (arr[i] <= arr[j]) 
            {
                temp[k++] = arr[i++];
            } else 
            {
                temp[k++] = arr[j++];
                invCount += (mid - i + 1); // Count inversions
            }
        }

        // Copy remaining elements of the left subarray
        while (i <= mid) 
        {
            temp[k++] = arr[i++];
        }

        // Copy remaining elements of the right subarray
        while (j <= right) 
        {
            temp[k++] = arr[j++];
        }

        // Copy sorted elements back to the original array
        for (i = left, k = 0; i <= right; i++, k++) 
        {
            arr[i] = temp[k];
        }

        return invCount;
    }

    // Function to perform merge sort and count inversions
    long long mergeSortAndCount(vector<int>& arr, int left, int right) 
    {
        long long invCount = 0;
        if (left < right) 
        {
            int mid = left + (right - left) / 2;

            // Count inversions in the left subarray
            invCount += mergeSortAndCount(arr, left, mid);

            // Count inversions in the right subarray
            invCount += mergeSortAndCount(arr, mid + 1, right);

            // Count split inversions
            invCount += mergeAndCount(arr, left, mid, right);
        }
        return invCount;
    }
};
