/*
 * @lc app=leetcode.cn id=100280 lang=cpp
 *
 * [剑指 Offer 05] 替换空格
 */

// @lc code=start
class Solution
{
public:
    string replaceSpace(string s)
    {
        string result = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                result += "%20";
            }
            else
            {
                result += s[i];
            }
        }
        return result;
    }
};
// @lc code=end
