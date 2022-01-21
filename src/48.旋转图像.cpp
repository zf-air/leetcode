/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution
{
public:
    // 先转置后镜像对称
    void rotate(vector<vector<int>> &matrix)
    {
        // 转置
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;
            }
        }

        // 镜像对称
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size() / 2; j++)
            {
                int t = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size() - j - 1];
                matrix[i][matrix.size() - j - 1] = t;
            }
        }
    }
};
// @lc code=end
