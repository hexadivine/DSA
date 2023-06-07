/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        int digit;
        map<int, bool> numDict;
        bool isHappyNum = true;
        int calculatedN;

        do {
            calculatedN = 0;
            while (n>0) {
                digit = n%10;
                calculatedN += digit*digit;
                n /= 10;
            }
            cout << calculatedN << endl;
            if (!numDict[calculatedN]) {
                numDict[calculatedN] = true;
            }
            else {
                isHappyNum = false;
                break;
            }
            n=calculatedN;
        } while (calculatedN != 1);

        return isHappyNum;
    }
};
// @lc code=end

