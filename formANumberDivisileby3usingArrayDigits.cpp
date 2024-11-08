class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int sum = 0;
      for(int i = 0; i < N; ++i) {
            int num = arr[i];
            // Extract each digit and add to digitSum
            while(num > 0) {
                sum += num % 10;
                num /= 10;
            }
        }
        if(sum % 3 != 0)
        {
            return 0;
        }
        return 1;
    }
};
