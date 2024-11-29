  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        
        sort(arr1.begin(), arr1.end());
        
        return arr1[k-1];
    }
};
