class Solution {
public:
    // Kyle Stallings
    // Aug 23rd 2023
    // This solution is based on the top Answer
    void moveZeroes(vector<int>& nums) {
    int i = 0;
    for(int j = 0; j < nums.size(); j++) {
        if(nums[j] != 0) 
            nums[i++] = nums[j];
    }

    while (i < nums.size())
        nums[i++] = 0;
    }
};