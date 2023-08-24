class Solution {
public:
    //Kyle Stallings
    // Aug 24 2023
    // This is my first attempt
    // I will try this the most simple way first then attempy some Data structures later
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;
        for(char l : s) {
            if(l=='A') absent++, late=0;
            else if(l=='L')late++;
            else late = 0;
            if(late >= 3) return false;
        }
        if(absent < 2) return true;
        return false; //Not needed but compiler isnt happy
    }
};