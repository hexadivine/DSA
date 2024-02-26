/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        sort(v.begin(), v.end());
        for (int i=0; i<v.size()-1; i++) {
            if (v[i] == v[i+1])
                return true;
        }
        return false;
    }
};
// @lc code=end

