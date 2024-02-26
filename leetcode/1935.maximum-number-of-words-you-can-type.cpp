/*
 * @lc app=leetcode id=1935 lang=cpp
 *
 * [1935] Maximum Number of Words You Can Type
 */

// @lc code=start
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int countTypedWords = 0;
        map<char, bool> brokenLetterDict;

        for (int i=0; i<brokenLetters.length(); i++) {
            brokenLetterDict[brokenLetters[i]] = true;
        }

        bool canBeTyped = true;

        for (int i=0; i<text.length()+1; i++) {
            if (text[i] == ' ' or text[i] == '\0') {
                if (canBeTyped)
                    countTypedWords++;
                canBeTyped = true;
            }


            if (canBeTyped && brokenLetterDict[text[i]]) 
                canBeTyped = false;
        }


        return countTypedWords;
    }
};
// @lc code=end

