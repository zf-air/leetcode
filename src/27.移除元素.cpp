/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    // 双指针移除元素
    int removeElement(vector<int> &nums, int val)
    {
        int slow = 0, fast = 0;
        int n = nums.size();
        while (fast < n)
        {
            if (nums[fast] != val)
            {
                nums[slow++] = nums[fast];
            }
            fast++;
        }
        return slow;
    }
};
// @lc code=end
