class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int count_0 = 0;
        int count_1 = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                count_0++;
            }
            else
            count_1++;
        }
        for(int i = 0; i < count_0; i++)
        {
            arr[i] = 0;
        }
        for(int i = count_0; i < n; i++)
        {
            arr[i] = 1;
        }
    }
};
