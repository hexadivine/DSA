/*
 * @lc app=leetcode id=2733 lang=cpp
 *
 * 2733. Neither Minimum nor Maximum
 * Level : easy
 */
// @lc code=start

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max = -1;
        int min = 101;
        int n=nums.size();
        
        for (int i=0; i<n; i++) {
            if (max < nums[i])
                max = nums[i];
            if (min > nums[i])
                min = nums[i];
        }

        for (int i=0; i<n; i++) {
            if (nums[i] != max && nums[i] != min)
                return nums[i];
        }
        
        return -1;
    }
};

