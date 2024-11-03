class Solution{
public:
    long long int fibSum(long long int N){
        //code here
        const long long int MOD = 1000000007;
        if (N <= 0) return 0;  
        if (N == 1) return 1;  
        
        long long int a = 1, b = 1;      
        long long int sum = (a + b) % MOD;      

        for (int i = 3; i <= N; i++) 
        {
            long long int next = (a + b) % MOD; 
            sum = (sum + next) % MOD;
            a = b;          
            b = next;           
        }
        
        return sum;             

    }
};
