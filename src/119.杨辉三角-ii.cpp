/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(rowIndex + 1);
        result[0] = 1;
        for (int i = 1; i <= rowIndex; i++)
        {
            result[i] = 1;
            for (int j = i - 1; j >= 1; j--)
            {
                result[j] = result[j] + result[j - 1];
            }
        }
        return result;
    }
};
// @lc code=end
