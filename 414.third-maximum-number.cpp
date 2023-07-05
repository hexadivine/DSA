/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int firstMax = INT_MIN;
        int n = nums.size();
        
        for (int i=0; i<n; i++) {
            if (firstMax < nums[i])
                firstMax = nums[i];
        }

        int secondMax = firstMax;
        for (int i=0; i<n; i++) {
            if (secondMax > nums[i] && nums[i] <= firstMax) {
                secondMax = nums[i];
                break;
            }
        }

        int thirdMax = secondMax;
        for (int i=0; i<n; i++) {
            if (thirdMax > nums[i] && nums[i] <= secondMax) {
                thirdMax = nums[i];
                break;
            }
        }

        return thirdMax;
    }
};
// @lc code=end

