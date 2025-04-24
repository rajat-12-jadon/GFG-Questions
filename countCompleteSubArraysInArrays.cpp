class Solution {
public:
    int countCompleteSubarrays(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> s;
        for(int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }

        int uniqueElements = s.size();

        unordered_map<int, int> freq;

        int left = 0, count = 0;

        for(int right = 0; right < n; right++)
        {
            freq[arr[right]]++;

            while(freq.size() == uniqueElements)
            {
                count += (n - right);

                freq[arr[left]]--;

                if(freq[arr[left]] == 0)
                {
                    freq.erase(arr[left]);
                } 
                left++;
            }
        }
        return count;
    }
};
