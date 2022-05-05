/*
 * @lc app=leetcode.cn id=100276 lang=cpp
 *
 * [剑指 Offer 04] 二维数组中的查找
 */

// @lc code=start
class Solution
{
public:
    /*
    题解：
        1.与左下角元素比较
        2.与左下角元素相等，返回true
        3.比左下角元素大，除去第一列，j++
        4.比左下角元素小，除去最后一行，i--;
    */
    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target)
    {
        int i = matrix.size() - 1;
        int j = 0;
        while (i >= 0 && j < matrix[0].size())
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] < target)
            {
                j++;
            }
            else if (matrix[i][j] > target)
            {
                i--;
            }
        }
        return false;
    }
};
// @lc code=end
