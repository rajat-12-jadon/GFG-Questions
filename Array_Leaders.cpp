vector<int> leaders(vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int> result;
        int rightMost = arr[n - 1];
        
        result.push_back(rightMost);
        
        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] >= rightMost) {
                rightMost = arr[i];
                result.push_back(rightMost);
            }
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
