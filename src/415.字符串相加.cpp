/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string result;
        int carry = 0;
        for (int i = num1.size() - 1, j = num2.size() - 1; i >= 0 || j >= 0 || carry == 1; i--, j--)
        {
            int x = i < 0 ? 0 : num1[i] - '0';
            int y = j < 0 ? 0 : num2[j] - '0';
            int sum = x + y + carry;
            x = sum % 10;
            carry = sum / 10;
            char ch = '0' + x;
            result += ch;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end
