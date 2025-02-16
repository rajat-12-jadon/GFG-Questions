class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num <= 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;

        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    // Function to count primes less than num
    int countPrimes(int num) {
        if (num <= 2) return 0;

        int count = 0;
        for (int i = 2; i < num; i++) {
            if (isPrime(i)) {
                count++;
            }
        }
        return count;
    }
};
