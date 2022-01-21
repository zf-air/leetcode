/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution
{
public:
    // m乘n矩阵
    void setZeroes(vector<vector<int>> &matrix)
    {
        // 记录第一行第一列是否需要置0
        bool row = false, column = false;
        // 第一行
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[0][j] == 0)
            {
                row = true;
            }
        }
        // 第一列
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][0] == 0)
            {
                column = true;
            }
        }

        // 找0，第一列第一行记录是否需要置0
        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 1; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        //置0
        for (int i = 1; i < matrix.size(); i++)
        {
            if (matrix[i][0] == 0)
            {
                for (int j = 1; j < matrix[0].size(); j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[0][j] == 0)
            {
                for (int i = 1; i < matrix.size(); i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if (row)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (column)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
// @lc code=end
