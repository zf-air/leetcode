/*
 * @lc app=leetcode.cn id=100274 lang=cpp
 *
 * [剑指 Offer 10- I] 斐波那契数列
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        int f0 = 0, f1 = 1, f2 = 1;
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        for (int i = 1; i < n; i++)
        {
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        return f2;
    }
};
// @lc code=end
