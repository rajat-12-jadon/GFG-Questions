class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        // return vector with correct order of elements
        set<int> uniqueElements;
        
        uniqueElements.insert(arr1.begin(), arr1.end());
        uniqueElements.insert(arr2.begin(), arr2.end());

        vector<int> result(uniqueElements.begin(), uniqueElements.end());
        
        return result;
    }
};
