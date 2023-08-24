class Solution {
    vector<string> res;
public:
    // Kyle Stallings
    // Aug 24 2023
    // This solution is based on the top answer
    // This solution is done recursivley
    unordered_map<char, string> mp;
    Solution() {
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
    }

    vector<string> letterCombinations(string digits, string str = "") {
        
        if(digits.size() == 0) {
            if(str=="") return res;
            res.push_back(str);
            return res;
        }

        char c = digits[0];
        for(auto x: mp[c]) {
            letterCombinations(digits.substr(1), str+x);
        }

        return res;

    }
};