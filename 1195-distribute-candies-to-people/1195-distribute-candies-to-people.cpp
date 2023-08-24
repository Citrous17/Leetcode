class Solution {
public:
    // Kyle Stallings
    // Aug 24 2023
    // This is my 2nd attempt, and it is based on the top answer
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> people(num_people);
        for(int i = 0; candies > 0; ++i, candies -= i)
            people[i % num_people] += min(i + 1, candies);
        return people;
    }
};