/*
 * @lc app=leetcode id=2259 lang=cpp
 *
 * [2259] Remove Digit From Number to Maximize Result
 */

// @lc code=start
class Solution {
public:
    string removeDigit(string number, char digit) {
        int n=number.length();
        string maxNum = "";
        for (int i=0; i<n; i++) {
            if(number[i] == digit) {
                
                string temp = number.substr(0, i) + number.substr(i+1, n);
                
                maxNum = max(temp, maxNum);
            }
        }
    
        return maxNum;
    }
};
// @lc code=end

