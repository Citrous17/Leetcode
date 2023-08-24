class Solution {
public:
    // Kyle Stallings
    // Aug 24 2023
    // There seems to be an optimal and easy solution for this problem. I will start with an easy one
    vector<int> distributeCandies(int candies, int num_people) {
        int counter = 1;
        vector<int> people(num_people);
        while(candies >= counter || candies > 0) {
            for(int i = 0; i < num_people; i++) {
                if(candies < counter) { people[i] += candies; candies = 0; break;}
                people[i] += counter;
                candies-=counter;
                counter++;
            }
        }
        return people;
    }
};