/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int sChars [26] = {0};
        int tChars [26] = {0};

        for (int i=0; s[i] != '\0'; i++) 
            sChars[int(s[i]-(int)'a')]++;

        for (int i=0; t[i] != '\0'; i++) 
            tChars[int(t[i]-(int)'a')]++;

        for (int i=0; i<26; i++) {
            if (sChars[i] != tChars[i]) {
                cout << sChars[i] << " " << tChars[i] << endl;
                return false;
            }
        }

        return true;
    }
};
// @lc code=end

