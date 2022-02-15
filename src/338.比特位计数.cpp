/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution
{
public:
    // i与i-1与相差一个1，与完之后 
    // 还剩下的公共部分的数中的1的个数再加1

    vector<int> countBits(int n)
    {
        vector<int> result(n + 1);
        for (int i = 1; i <= n; i++)
        {
            result[i] = result[i & (i - 1)] + 1;
        }
        return result;
    }
};
// @lc code=end
