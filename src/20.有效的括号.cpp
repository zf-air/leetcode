/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> S;
        for (char i : s)
        {
            if ((i == '(') || (i == '[') || (i == '{'))
            {
                S.push(i);
            }
            else
            {
                if (!S.empty())
                {
                    if ((i == ')' && S.top() == '(') || (i == ']' && S.top() == '[') || (i == '}' && S.top() == '{'))
                    {
                        S.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (!S.empty())
            return false;
        return true;
    }
};
// @lc code=end
