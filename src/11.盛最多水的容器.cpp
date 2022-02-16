/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution
{
public:
    // 双指针，值小的向内移动，值大的不动
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;
        int result = 0;
        while (i <= j)
        {
            result = max(result, min(height[i], height[j]) * (j - i));
            if (height[i] >= height[j])
            {
                //直到找到比height[j]大的为止,不用每次都计算面积
                int t = height[j];
                while (i <= j && height[j] <= t)
                {
                    j--;
                }
            }
            else
            {
                int t = height[i];
                while (i <= j && height[i] <= t)
                {
                    i++;
                }
            }
        }
        return result;
    }
};
// @lc code=end
