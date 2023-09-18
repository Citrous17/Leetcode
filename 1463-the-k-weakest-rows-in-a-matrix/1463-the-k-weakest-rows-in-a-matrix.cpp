class Solution {
public:
    // Three big strategies to Tackle the Problem
    // 1) Sorting
    // 2) Min-heap
    // 3) Binary Search
    //For today's submission, I chose to go with sorting, which is based on the Top Answer
    // Kyle Stallings
    // Sep 18 2023
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rowStrengths;
        for (int i = 0; i < mat.size(); ++i) {
            int strength = accumulate(mat[i].begin(), mat[i].end(), 0);
            rowStrengths.push_back({strength, i});
        }
        
        sort(rowStrengths.begin(), rowStrengths.end());
        
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(rowStrengths[i].second);
        }
        
        return result;    
    }
};