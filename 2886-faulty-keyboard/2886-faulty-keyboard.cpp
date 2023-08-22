class Solution {
public:
    string finalString(string s) {
        string sol;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'i') {
                reverse(sol.begin(), sol.end());
            } else {
                sol += s[i];
            }
        }
        return sol;
    }
};