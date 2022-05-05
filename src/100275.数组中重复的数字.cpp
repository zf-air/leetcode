/*
 * @lc app=leetcode.cn id=100275 lang=cpp
 *
 * [剑指 Offer 03] 数组中重复的数字
 */

// @lc code=start
class Solution
{
public:
    int findRepeatNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> table(n);
        for (int i = 0; i < n; i++)
        {
            if (table[nums[i]] != 0)
            {
                return nums[i];
            }
            table[nums[i]]++;
        }
        return -1;
    }
};
// @lc code=end
