class Solution {
  public:
  void permut(string &s, vector<string> &ans, string &temp, vector<bool> &visited)
    {
        //Base Condition

        if(temp.size() == s.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(visited[i]) continue;
            
            if(i > 0 && s[i] == s[i - 1] && !visited[i - 1]) continue;
            visited[i] = 1;
            temp.push_back(s[i]);
            permut(s, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        string temp;
        vector<bool> visited(s.size(), false);
        
        sort(s.begin(), s.end());
        permut(s, ans, temp, visited);
        return ans;
    }
};
