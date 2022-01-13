/*
 * @lc app=leetcode.cn id=394 lang=cpp
 *
 * [394] 字符串解码
 */

// @lc code=start
class Solution
{
public:
    string decodeString(string s)
    {
        stack<char> S;
        int i = 0;
        string result;

        while (i < s.length())
        {
            if (s[i] != ']')
            {
                S.push(s[i]);
            }
            else
            {
                // 读取字符串
                string ss = "";
                while (S.top() != '[')
                {
                    ss += S.top();
                    S.pop();
                }
                // 消掉 [
                S.pop();

                // 处理数字
                char x = S.top();
                int num = 0, k = 1;
                while (x >= '0' && x <= '9')
                {
                    S.pop();
                    num = num + k * (x - '0');
                    k *= 10;
                    if (!S.empty())
                        x = S.top();
                    else
                        break;
                }

                // 处理字符串并入栈
                for (int j = 0; j < num; j++)
                {
                    // 需要倒着压栈，刚开始读的时候就是反的
                    for (int k = ss.length() - 1; k >= 0; k--)
                    {
                        S.push(ss[k]);
                    }
                }
            }
            i++;
        }
        
        while (!S.empty())
        {
            result += S.top();
            S.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end
