/*
 * @lc app=leetcode.cn id=739 lang=cpp
 *
 * [739] 每日温度
 */

// @lc code=start
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> res(n);
        res[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            int j = i + 1;
            if (temperatures[j] > temperatures[i])
            {
                res[i] = 1;
                continue;
            }
            else
            {
                while (j < n)
                {
                    j += res[j];
                    if (temperatures[i] < temperatures[j])
                    {
                        res[i] = j - i;
                        break;
                    }
                    else if (res[j] == 0)
                    {
                        res[i] = 0;
                        break;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end
