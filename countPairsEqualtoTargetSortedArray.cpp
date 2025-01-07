class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n = arr.size();
        int count = 0;
        int left = 0, right = n - 1;
        while(left < right)
        {
            int sum = arr[left] + arr[right];
            if(sum == target)
            {
                if(arr[left] == arr[right])
                {
                    int k = right - left + 1;
                    count += (k * (k - 1)) / 2;
                    break;
                }
                
                int leftCount = 1, rightCount = 1;
                while(left + 1 < right && arr[left] == arr[left + 1])
                {
                    left++;
                    leftCount++;
                }
                while(right - 1 > left && arr[right] == arr[right - 1])
                {
                    right--;
                    rightCount++;
                }
                
                count += leftCount * rightCount;
                left++;
                right--;
            }
            else if(sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return count;
    }
};
