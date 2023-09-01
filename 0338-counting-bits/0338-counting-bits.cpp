class Solution {
public:
    // Kyle Stallings
    // Sep 1 2023
    // Answer based on Top Solution
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0; i <= n; i++) {
            int sum = 0;
            int num = i;

            while(num != 0) {
                sum += num%2;
                num /= 2;
            }

            ans.push_back(sum);
        }
        return ans;
    }
    
};