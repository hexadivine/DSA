/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstMax = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;
        int n = nums.size();
        
        if (n==1)
            return nums[0];
        else if (n==2)
            return max(nums[0], nums[1]);

        for (int i=0; i<n; i++) {
            if (nums[i] == firstMax || nums[i] == secondMax || nums[i] == thirdMax)
                continue;

            if (firstMax < nums[i]) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[i];
            }
            else if (secondMax < nums[i] && secondMax < firstMax) {
                thirdMax = secondMax;
                secondMax = nums[i];
            }
            else if (thirdMax < nums[i] && thirdMax < secondMax) {
                thirdMax = nums[i];
            }
        }

        if (thirdMax == LONG_MIN)
            return firstMax;
        if (secondMax == LONG_MIN)
            return firstMax;

        return thirdMax;
    }
};
// @lc code=end

