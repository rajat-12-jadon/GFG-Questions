class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here  
        vector<int> count(256, 0);
        int first = 00, second = 0, len = str.size(), diff = 0;
        
        // calculate all unique characters
        while(first < str.size())
        {
            if(count[str[first]] == 0)
            diff++;
            
            count[str[first]]++;
            first++;
        };
        
        for(int i = 0; i < 256; i++)
        count[i] = 0;
        
        first = 0;
        while(second < str.size())
        {
        //diff exist krta hai
            while(diff && second < str.size())
                {
                    if(count[str[second]] == 0)
                    diff--;
                    
                    count[str[second]]++;
                    second++;
                
                }  
            len = min(len, second - first);
            
            //diff ki value 1 na ban paaye
            
            while(diff != 1)
                {
                    len = min(len, second - first);
                    count[str[first]]--;
                
                    if(count[str[first]] == 0)
                    diff++;
                 
                    first++;
                }
        }
        return len;
    }
};
