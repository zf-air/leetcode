/*
 * @lc app=leetcode.cn id=739 lang=cpp
 *
 * [739] 每日温度
 */

// @lc code=start
class Solution
{
public:
    // vector<int> dailyTemperatures(vector<int> &temperatures)
    // {
    //     int n = temperatures.size();
    //     vector<int> res(n);
    //     res[n - 1] = 0;
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         int j = i + 1;
    //         if (temperatures[j] > temperatures[i])
    //         {
    //             res[i] = 1;
    //             continue;
    //         }
    //         else
    //         {
    //             while (j < n)
    //             {
    //                 j += res[j];
    //                 if (temperatures[i] < temperatures[j])
    //                 {
    //                     res[i] = j - i;
    //                     break;
    //                 }
    //                 else if (res[j] == 0)
    //                 {
    //                     res[i] = 0;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    //     return res;
    // }
    // vector<int> dailyTemperatures(vector<int> &temperatures)
    // {
    //     int n = temperatures.size();
    //     vector<int> res(n);
    //     res[n - 1] = 0;
    //     stack<pair<int, int>> s;
    //     s.push(make_pair(temperatures[n - 1], n - 1));
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         if (temperatures[i] < s.top().first)
    //         {
    //             res[i] = s.top().second - i;
    //             s.push(make_pair(temperatures[i], i));
    //             continue;
    //         }
    //         while (!s.empty() && temperatures[i] >= s.top().first)
    //         {
    //             s.pop();
    //         }
    //         if (s.empty())
    //         {
    //             res[i] = 0;
    //         }
    //         else
    //         {
    //             res[i] = s.top().second - i;
    //         }
    //         s.push(make_pair(temperatures[i], i));
    //     }
    //     return res;
    // }

    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> res(n);
        res[n - 1] = 0;
        stack<int> s;
        s.push(n - 1);
        for (int i = n - 2; i >= 0; i--)
        {
            if (temperatures[i] < temperatures[s.top()])
            {
                res[i] = s.top() - i;
                s.push(i);
                continue;
            }
            while (!s.empty() && temperatures[i] >= temperatures[s.top()])
            {
                s.pop();
            }
            if (s.empty())
            {
                res[i] = 0;
            }
            else
            {
                res[i] = s.top() - i;
            }
            s.push(i);
        }
        return res;
    }
};
// @lc code=end
