/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int verticalDist = 0;
        int horizontalDist = 0;

        int i=0;
        while (moves[i] != '\0') {
            if (moves[i] == 'U') 
                verticalDist++;
            else if (moves[i] == 'D') 
                verticalDist--;
            else if (moves[i] == 'R')
                horizontalDist++;
            else if (moves[i] == 'L')
                horizontalDist--;
            i++;
        }
        return (horizontalDist == 0 && verticalDist == 0);
    }
};
// @lc code=end

