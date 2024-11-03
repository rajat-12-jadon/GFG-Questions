class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        int index = 0;

        while(index < address.size())
        {
            if(address[index] == '.')
            {
                result += "[.]";
            }
            else
            {
                result += address[index];
            }
            index++;
        }
        return result;
    }
};
