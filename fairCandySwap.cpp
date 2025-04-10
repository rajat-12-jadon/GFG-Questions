class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int m = aliceSizes.size();
        int n = bobSizes.size();
        int sumA = 0;
        int sumB = 0;

        for(int i = 0; i < m; i++)
        {
            sumA += aliceSizes[i];
        }

        for(int i = 0; i < n; i++)
        {
            sumB += bobSizes[i];
        }

        int difference = (sumB - sumA) / 2;

        unordered_set<int> bobSide(bobSizes.begin(), bobSizes.end());

        for(int i = 0; i < m; i++)
        {
            if(bobSide.count(aliceSizes[i] + difference))
            {
                return {aliceSizes[i], aliceSizes[i] + difference};
            }
        }

        return {};
    }
};
