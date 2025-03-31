class Solution {
  public:
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b) {
        // Your code goes here
        unordered_set<int> s(a.begin(), a.end());
        
        int count = 0;
        
        for (int i = 0; i < b.size(); i++) 
        {
            if (s.find(b[i]) != s.end()) 
            { 
                count++;
                s.erase(b[i]);
            }
        }
        return count;
    }
};
