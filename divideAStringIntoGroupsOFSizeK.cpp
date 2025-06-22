class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        vector<string> result;
        for(int i = 0; i < n; i+=k)
        {
            string group = s.substr(i, k);

            if(group.length() < k)
            {
                group.append(k - group.length(), fill);
            }
            result.push_back(group);
        }
        return result;
    }
};
