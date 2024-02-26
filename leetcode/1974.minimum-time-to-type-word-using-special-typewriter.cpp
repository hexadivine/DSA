/*
 * @lc app=leetcode id=1974 lang=cpp
 *
 * [1974] Minimum Time to Type Word Using Special Typewriter
 */

// @lc code=start
class Solution {
public:
    int minTimeToType(string word) {
        char pointer = 'a';
        int i=0;
        int sec = 0;

        while (word[i] != '\0') {
            int clockwiseTime = abs((int)word[i]-(int)pointer);
            int antiClockwiseTime = 26-clockwiseTime;
           cout << clockwiseTime << " " << antiClockwiseTime << endl;
            int moveTime = clockwiseTime < antiClockwiseTime ? clockwiseTime : antiClockwiseTime; 
            int clickTime = 1;
            sec += moveTime + clickTime;
            cout << sec << endl;
            pointer = word[i++];
        } 

        return sec;
    }
};
// @lc code=end

