/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascRow = {1};
        
        for (int row=1; row<=rowIndex; row++) {
            int vectorSize = row+1;
            int prevNum = 1;
            for (int i=0; i<vectorSize; i++) {
                if (i==0 || i==vectorSize-1) {
                    if (i<pascRow.size())
                        pascRow[i] = 1;
                    else
                        pascRow.push_back(1);

                    continue;
                }

                int pascNum = prevNum + pascRow[i];;
                prevNum = pascRow[i];

                if (i<pascRow.size())
                    pascRow[i] = pascNum;
                else
                    pascRow.push_back(pascNum);
                
            }
        }

        return pascRow;
    }
};
// @lc code=end

