class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;

        int prev = -1;

        for(int i = 0; i < groups.size(); i++)
        {
            if(prev == -1 || prev != groups[i])
            {
                result.push_back(words[i]);
                prev = groups[i];
            }
        }
        return result;
    }
};
