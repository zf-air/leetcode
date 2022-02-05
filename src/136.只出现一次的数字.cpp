/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution
{
public:                                                                                                        
    // 同一个数字异或为0
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int i : nums)
        {
            result = result ^ i;
        }
        return result;
    }
};
// @lc code=end
