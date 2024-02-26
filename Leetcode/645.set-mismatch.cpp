/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> errorNums;
        int repetedNum, deletedNum;
        for (int i=0; i<nums.size(); i++) {
            if(nums[nums[i]-1] > 0)
                nums[nums[i]-1] *= -1;
            else {
                repetedNum = nums[i];
                break;
            }
        }
        errorNums.push_back(repetedNum);
        return errorNums;

    }
};
// @lc code=end

