/*
 * @lc app=leetcode.cn id=735 lang=cpp
 *
 * [735] 行星碰撞
 */

// @lc code=start
class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> s;
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (s.empty() || asteroids[i] > 0)
            {
                s.push(asteroids[i]);
            }
            else
            {
                while (!s.empty() && s.top() > 0 && s.top() < (-1) * asteroids[i])
                {
                    s.pop();
                }
                if (!s.empty() && s.top() == (-1) * asteroids[i])
                {
                    s.pop();
                }
                else if (s.empty() || s.top() < 0)
                {
                    s.push(asteroids[i]);
                }
            }
        }
        int length = s.size();
        vector<int> result(length);
        for (int i = length - 1; i >= 0; i--)
        {
            result[i] = s.top();
            s.pop();
        }
        return result;
    }
};
// @lc code=end
