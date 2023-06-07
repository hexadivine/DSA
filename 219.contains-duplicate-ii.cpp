/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> dupDict;
        int n=nums.size();

        for (int i=0; i<n; i++) {
            if (dupDict[nums[i]] == 0) {
                dupDict[nums[i]] = i+1;
            } 
            else if (abs((i)-(dupDict[nums[i]]-1)) <= k) {
                return true;
            }
            else {
                dupDict[nums[i]] = i+1;
            }
        }

        return false;
    } 
};
// @lc code=end

