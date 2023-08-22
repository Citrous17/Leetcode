class Solution {
public:
    //First Attempy
    // Kyle Stallings Aug 22 2023
    // Part of answer based on top solution, will revisit
    bool isUgly(int n) {
        if(n <= 0) return false;
        if(n == 1) return true;
        std::array<int, 3> uglyPrimes = { 2, 3, 5 };
        for (int prime : uglyPrimes)
        {
            while (n % prime == 0)
            {
                n /= prime;
            }
        }
        return n == 1;
    }
};