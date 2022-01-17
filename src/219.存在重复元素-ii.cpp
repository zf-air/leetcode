/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) != mp.end())
            {
                if ((i - mp[nums[i]]) <= k)
                {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end
