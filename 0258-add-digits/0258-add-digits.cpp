class Solution {
public:
    //First Attempt
    // Kyle Stallings, Aug 21st 2023
    //Part of this solution was already solved by my CSCE121 Class Assignments and from the Top Answer
    int addDigits(int num) {
        int sol = 0;
        while(num != 0) {
            sol += (num % 10);
            num /= 10; 
        }
        if(sol < 10)
            return sol;
        else
            return addDigits(sol);
    }
};