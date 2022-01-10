/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    // 暴力解法
    // vector<int> twoSum(vector<int> &nums, int target)
    // {
    //     vector<int> result;
    //     int flag = 0;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         for (int j = i + 1; j < nums.size(); j++)
    //         {
    //             if (nums[i] + nums[j] == target)
    //             {
    //                 result.push_back(i);
    //                 result.push_back(j);
    //                 flag = 1;
    //                 break;
    //             }
    //         }
    //         if (flag == 1)
    //             break;
    //     }
    //     return result;
    // }

    // map解法 版本一
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[target - nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if ((mp.find(nums[i]) != mp.end()) && mp[nums[i]] != i)
            {
                result.push_back(mp[nums[i]]);
                result.push_back(i);
                return result;
            }
        }
        return result;
    }
};
// @lc code=end
