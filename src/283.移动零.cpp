/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    // 双指针，把不是0的都移动到左边，剩下的填0
    void moveZeroes(vector<int> &nums)
    {
        if (nums.empty())
            return ;
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
        }
        while (j < nums.size())
        {
            nums[j++] = 0;
        }
    }
};
// @lc code=end
