/*
 * @lc app=leetcode.cn id=2115 lang=cpp
 *
 * [1987] 不同的好子序列数目
 */

// @lc code=start
class Solution
{
public:
    int numberOfUniqueGoodSubsequences(string binary)
    {
        int result = 0;
        if (binary.size() < 3)
        {
            return result;
        }
        for (int i = 2; i < binary.size(); i++)
        {
            if ((binary[i] != binary[i - 1]) && (binary[i] != binary[i - 2]) && (binary[i - 1] != binary[i - 2]))
            {
                result++;
            }
        }
        return result;
    }
};
// @lc code=end
