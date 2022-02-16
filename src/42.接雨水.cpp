/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution
{
public:
    // int trap(vector<int> &height)
    // {
    //     int result = 0;
    //     int n = height.size();
    //     vector<int> left(n), right(n);
    //     // 找左边的最大值
    //     for (int i = 1; i < n; i++)
    //     {
    //         left[i] = max(left[i - 1], height[i - 1]);
    //     }
    //     // 找右边的最大值
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         right[i] = max(right[i + 1], height[i + 1]);
    //     }

    //     // 让左右最大值中较小的一个减去当前高度
    //     for (int i = 1; i < n - 1; i++)
    //     {
    //         int level = min(left[i], right[i]);
    //         result += max(0, level - height[i]);
    //     }
    //     return result;
    // }

    // 比较巧的办法
    // h1从左往右，h2从右往左，遍历一遍减去多余的面积
    int trap(vector<int> &height)
    {
        int n = height.size();
        long result = 0;
        int h1 = 0;
        int h2 = 0;
        int i = 0;
        while (i < n)
        {
            h1 = max(h1, height[i]);
            h2 = max(h2, height[n - i - 1]);
            result = result + h1 + h2 - height[i];
            i++;
        }
        return result - n * h1;
    }
};
// @lc code=end
