class Solution {
  public:
   void subSequence(vector<int> &arr, int index, int n, vector<vector<int>> &ans, vector<int> &temp)
    {
        if(index == n)
        {
            ans.push_back(temp);
            return;
        }

        //not included
        subSequence(arr, index + 1, n, ans, temp);

        //included
        temp.push_back(arr[index]);
        subSequence(arr, index + 1, n, ans, temp);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());

        // Step 2: Generate subsets
        subSequence(nums, 0, nums.size(), ans, temp);

        // Step 3: Sort the subsets lexicographically (by size first, then lexicographically)
        sort(ans.begin(), ans.end());

        return ans;
    }
};
