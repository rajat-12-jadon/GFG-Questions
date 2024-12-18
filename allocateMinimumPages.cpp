class Solution {
  public:
  
    bool isPossible(vector<int> &arr, int k, int maxPages) {
        int studentsRequired = 1; // Start with one student
        int currentSum = 0;

        for (int pages : arr) {
            if (pages > maxPages) return false; // A single book exceeds maxPages

            if (currentSum + pages > maxPages) {
                // Assign books to the next student
                studentsRequired++;
                currentSum = pages;

                if (studentsRequired > k) return false; // Too many students needed
            } else {
                currentSum += pages;
            }
        }

        return true;
    }

    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if (k > n) return -1; // Not enough books for each student to get one

        int low = *max_element(arr.begin(), arr.end()); // Minimum possible maxPages
        int high = accumulate(arr.begin(), arr.end(), 0); // Maximum possible maxPages
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(arr, k, mid)) {
                result = mid; // Update result with the current mid
                high = mid - 1; // Try for a smaller maximum
            } else {
                low = mid + 1; // Increase the maximum
            }
        }

        return result;
    }
};
