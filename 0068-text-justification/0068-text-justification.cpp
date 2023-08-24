class Solution {
public:
    // Kyle Stallings
    // Aug 24th 2023
    // This solution is based on the top answer
    // This approach uses a greedy approach, and is not necessarily the optimal solution
    // I chose to solve this useing a Modulo-based Space Distribution
    // Time complexity is O(n) and the space complexity is O(n x m)
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        vector<string> cur;

        int numLetters = 0;

        for(string word : words) {
            if(word.size() + cur.size() + numLetters > maxWidth) {
                for(int i = 0; i < maxWidth - numLetters; i++) {
                    cur[i % (cur.size() - 1 ? cur.size() - 1 : 1)] += ' ';
                }
                res.push_back("");
                for (string s : cur) res.back() += s;
                cur.clear();
                numLetters = 0;
            }
            cur.push_back(word);
            numLetters += word.size();
        }

        string last_line = "";
        for(string s : cur) last_line += s + ' ';
        last_line = last_line.substr(0, last_line.size() -1); //Left aligned
        while (last_line.size() < maxWidth) last_line += ' ';
        res.push_back(last_line);

        return res;
    }
};