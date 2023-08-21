class Solution {
public:
    //First Attempt
    //Kyle Stallings, Aug 21st 2023
    int lengthOfLastWord(string s) {
        int length = 0;
        int count = s.size() - 1;

        //Makes sure to start on a word instead of a space
        while(s[count] == ' ') {
            count--;
        }

        //Keep going until the end of the word
        while(s[count] != ' ') {
            length++;
            count--;
            //One letter word
            if(count < 0) return length; 
        }
        return length;
    }
};