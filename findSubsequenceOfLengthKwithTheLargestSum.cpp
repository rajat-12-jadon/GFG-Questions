class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> valueIndex;
        for(int i = 0; i < nums.size(); i++)
        {
            valueIndex.push_back({nums[i], i});
        }

        sort(valueIndex.begin(), valueIndex.end(), [](pair<int, int>& a, pair<int, int>& b)
        {
            if(a.first == b.first)
            {
                return a.second < b.second;
            }
            return a.first > b.first;
        });
        vector<pair<int, int>> topK(valueIndex.begin(), valueIndex.begin() + k);

        sort(topK.begin(), topK.end(), [](pair<int, int>& a, pair<int, int>& b)
        {
            return a.second < b.second;
        });

        vector<int> result;
        for(int i = 0; i < topK.size(); i++)
        {
            result.push_back(topK[i].first);
        }
        return result;
    }
};
