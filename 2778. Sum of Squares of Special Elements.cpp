/*
 * @lc app=leetcode id=2733 lang=cpp
 *
 * 2778. Sum of Squares of Special Elements
 * Level : Easy    
 */
// @lc code=start
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> indexes;
        
        for (int i=1; i<=n/2; i++) {

            if (n%i == 0)
                indexes.push_back(i);
            
        }
        indexes.push_back(n);
        int result = 0;
        
        for (int i=0; i<indexes.size(); i++) {
            result += nums[indexes[i]-1]*nums[indexes[i]-1];
        }
        
        return result;
    }
};