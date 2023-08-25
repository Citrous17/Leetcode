class Solution {
public:
    // This is my first Attempy
    // Kyle Stallings Aug 24 2023
    // My solution is based on the top answer
    // There were multiple options, I went with the intuitive option of using 2D Dynamic Programming
    /*
    Time Complexity:

The solution iterates over each possible (i,j)(i, j)(i,j) combination, leading to a time complexity of O(m×n)O(m \times n)O(m×n).
Space Complexity:

The space complexity is O(m×n)O(m \times n)O(m×n) due to the 2D dpdpdp array.
    */
    bool isInterleave(string s1, string s2, string s3) {
        int m = s1.length(), n = s2.length(), l = s3.length();
        if (m + n != l) return false;
        
        if (m < n) return isInterleave(s2, s1, s3);

        vector<bool> dp(n + 1, false);
        dp[0] = true;

        for (int j = 1; j <= n; ++j) {
            dp[j] = dp[j - 1] && s2[j - 1] == s3[j - 1];
        }

        for (int i = 1; i <= m; ++i) {
            dp[0] = dp[0] && s1[i - 1] == s3[i - 1];
            for (int j = 1; j <= n; ++j) {
                dp[j] = (dp[j] && s1[i - 1] == s3[i + j - 1]) || (dp[j - 1] && s2[j - 1] == s3[i + j - 1]);
            }
        }
        
        return dp[n];
    }
};