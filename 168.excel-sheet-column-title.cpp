/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column revTitle
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
       int charInt;
       string title="";
       bool flag = false;

       do {
            cout << columnNumber << endl;
            charInt = columnNumber%26 == 0 ? 26 : columnNumber%26;
            title += (char) charInt + 64;
            columnNumber = columnNumber%26 == 0 ? columnNumber/26 - 1 : columnNumber/26;
       } while (columnNumber > 0);

       string revTitle = "";
       for (int i=title.length()-1; i>=0; i--)
            revTitle += title[i];

        cout << columnNumber << endl;

        return revTitle;

    }
};
// @lc code=end

