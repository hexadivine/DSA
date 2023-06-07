/*
 * @lc app=leetcode id=2138 lang=cpp
 *
 * [2138] Divide a String Into Groups of Size k
 */

// @lc code=start
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> a;
        for (int i=(int)s[0]; i<=(int)s[3]; i++) {
            for (int j=(int)s[1]; j<=(int)s[4]; j++) {
                
                string aa = "";
                aa += (char)i;
                aa += ' ';
                aa += (char)j;

                a.push_back(aa);
            } 
        }
        return a;
    }
};
// @lc code=end

