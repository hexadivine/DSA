/*
 * @lc app=leetcode id=2194 lang=cpp
 *
 * [2194] Cells in a Range on an Excel Sheet
 */

// @lc code=start
class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> a;
        for (int i=(int)s[0]; i<=(int)s[3]; i++) {
            for (int j=(int)s[1]; j<=(int)s[4]; j++) {
                
                string aa = "";
                aa += (char)i;
                aa += (char)j;

                a.push_back(aa);
            } 
        }
        return a;
    }
};
// @lc code=end

