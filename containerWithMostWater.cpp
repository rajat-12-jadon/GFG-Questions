class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int left = 0, right = arr.size() - 1;
        int maxArea = 0;
        
        while(left < right)
        {
            int width = right - left;
            int height = min(arr[left], arr[right]);
            maxArea = max(maxArea, width * height);
            
            if(arr[left] < arr[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
};
