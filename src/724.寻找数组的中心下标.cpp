/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心下标
 */

// @lc code=start
class Solution
{
public:
    // int pivotIndex(vector<int> &nums)
    // {
    //     int sum = 0;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         sum += nums[i];
    //     }
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         int t = 0;
    //         t = i - 1 >= 0 ? nums[i - 1] : 0;
    //         sum -= nums[i];
    //         if (t + t == sum)
    //         {
    //             return i;
    //         }
    //         sum += nums[i];
    //         nums[i] += t;
    //     }
    //     return -1;
    // }

    int pivotIndex(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 0;
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i - 1];
        }
        
        int t = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0)
                t = nums[i - 1];
            if (nums[i] + t == nums[nums.size() - 1])
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end
