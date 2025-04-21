class Solution {
public:
    int numberOfArrays(vector<int>& arr, int lower, int upper) {
        vector<long long> steps;
        int n = arr.size();
        steps.push_back(0);

        for (int i = 0; i < n; i++)
        {
            steps.push_back(steps.back() + arr[i]);
        }

        long long minElement = *min_element(steps.begin(), steps.end());
        long long maxElement = *max_element(steps.begin(), steps.end());

        long long minAnswer = lower - minElement;
        long long maxAnswer = upper - maxElement;

        if(minAnswer > maxAnswer)
        {
            return 0;
        }
        else
        {
            return maxAnswer - minAnswer + 1;
        }
    }
};
