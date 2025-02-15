class Solution {
  public:
    bool Search(vector<int>& arr, int target) {
        // Code here
         int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return true; // Found target

        // If duplicates exist, just move pointers
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++;
            high--;
            continue;
        }

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid]) {
                high = mid - 1; // Search left
            } else {
                low = mid + 1; // Search right
            }
        }
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[high]) {
                low = mid + 1; // Search right
            } else {
                high = mid - 1; // Search left
            }
        }
    }

    return false;
    }
};
