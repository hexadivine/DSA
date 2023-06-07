/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        double max;

        for (int i=0; i<k; i++) {
            sum += nums[i];
        }

        max = sum;
        for (int i=k; i<nums.size(); i++) {
            sum += nums[i] - nums[i-k];
            if (max<sum) 
                max = sum;
        }

        return max/k;
    }
};
// @lc code=end

