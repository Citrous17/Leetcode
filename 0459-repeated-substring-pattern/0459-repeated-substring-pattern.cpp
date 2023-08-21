class Solution {
public:
    //First Attempt
    //Kyle Stallings, Aug 21 2023
    // Solution was shown from top Answer
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string sub = doubled.substr(1, doubled.size() - 2);
        return sub.find(s) != string::npos;
    }
};