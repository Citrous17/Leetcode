class Solution {
public:
    //First Attempt
    // Kyle Stallings Aug 23 2023
    // This solution is based on the top answer
    // This code uses a recursive approach with memoization

    unordered_map<string, bool> dp;

    bool solve(string s, unordered_set<string>&m) {
        if(s.length()==0){
            return true;
        }
        if(dp.find(s)!=dp.end())
        return dp[s];
        for(int i=0;i<s.length();i++){
            string r=s.substr(0,i+1);
            if(m.count(r)){
                if(solve(s.substr(i+1),m))
                return dp[s]=true;
            }
        }
        return dp[s]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
         unordered_set<string>m;
        for(auto x:wordDict){
            m.insert(x);
        }
         return solve(s,m);
    }
};