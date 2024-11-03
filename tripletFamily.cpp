class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = n - 1; i >= 2; i--) {
            int left = 0, right = i - 1;
            
            while (left < right) {
                int sum = arr[left] + arr[right];
                
                if (sum == arr[i]) {
                    return true;
                } else if (sum < arr[i]) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return false;
    }
};
