class Solution {
  public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N) {
        // code here
        map<long long int, long long int> freq;
        
        for(int i = 0; i < N; i++)
        {
            freq[Arr[i]]++;
        }
        
        vector<long long int> result;
        
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            if(it -> second % 2 == 1)
            {
                result.push_back(it -> first);
            }
        }
        
        sort(result.begin(), result.end(), greater<long long int>());
        
        return result;
    }
};
