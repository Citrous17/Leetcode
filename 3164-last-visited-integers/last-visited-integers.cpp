// Kyle Stallings
// 2/24/2024

class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        deque<int> dq {};
        deque<int>::iterator it = dq.begin(); 

        vector<int> ans {};

        int consecutive = 0;

        for(long unsigned int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                consecutive = 0;
                dq.insert(it, nums[i]);
                it = dq.begin();
            } else {     
                if(consecutive <= dq.size()) {
                    if(consecutive == dq.size()) {
                        ans.push_back(-1);
                    } else {
                    ans.push_back(dq[consecutive]);
                    }
                } else {
                    ans.push_back(-1);
                }
                consecutive++;
            }
        }

        return ans;
    }
};