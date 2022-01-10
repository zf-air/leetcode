/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution
{
public:
    // 原地hash，将数字与下标对应

    // 加负号
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        // 出现过的变为负值
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
            {
                nums[index] = -nums[index];
            }
        }
        // 统计正数的个数
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                result.push_back(i + 1);
            }
        }
        return result;
    }

    // 变为加n
    // vector<int> findDisappearedNumbers(vector<int> &nums)
    // {
    //     if (nums.empty())
    //         return nums;
    //     int n = nums.size();
    //     // 出现过的加n
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         int index;
    //         index = nums[i] > n ? nums[i] - n - 1 : nums[i] - 1;
    //         if (nums[index] <= n)
    //         {
    //             nums[index] += n;
    //         }
    //     }
    //     // 统计小于等于n的个数
    //     vector<int> result;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         if (nums[i] <= n)
    //         {
    //             result.push_back(i + 1);
    //         }
    //     }
    //     return result;
    // }
};
// @lc code=end
