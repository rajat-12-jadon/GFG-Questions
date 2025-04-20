class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> freq;
        int result = 0;
        for(int i = 0; i < answers.size(); i++)
        {
            freq[answers[i]]++;
        }

        for(auto it = freq.begin(); it != freq.end(); it++)
        {
            int x = it -> first;
            int f = it -> second;
            int groups = ceil((double)f / (x + 1));
            result += groups * (x + 1); 
        }
        return result;
    }
};
