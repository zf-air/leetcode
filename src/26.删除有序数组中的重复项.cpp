/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (j == 0 || nums[j] != nums[j - 1])
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
// @lc code=end
