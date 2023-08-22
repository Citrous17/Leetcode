class Solution {
public:
    //First Attempt at Solution
    // Kyle Stallings Aug 22, 2023
    // Solution used top answer. Will revisit in future
    string convertToTitle(int n) {
        if(n < 27) {
            return string(1, 'A' + (n-1) % 26);
        }

        std::string c = "";
        while (n > 0) {
            if (n % 26 == 0) {
                c += 'A' + 25;
                n -= 1;
            } else {
                c += 'A' + n % 26 - 1;
            }
            n /= 26;
        }
        std::reverse(c.begin(), c.end());
        return c;        
    }

};