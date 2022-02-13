/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int result = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > 0)
            {
                nums[i] += nums[i - 1];                
            }
            if (nums[i] > result)
                result = nums[i];
        }
        return result;
    }
};
// @lc code=end
