/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    // 动态规划 
    // 前i天的最大收益 = max{前i-1天的最大收益，第i天的价格-前i-1天中的最小价格}
    int maxProfit(vector<int> &prices)
    {
        int result = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                result = max(result, prices[i] - prices[i - 1]);
                prices[i] = prices[i - 1];
            }
        }
        return result;
    }
};
// @lc code=end
