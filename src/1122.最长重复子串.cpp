/*
 * @lc app=leetcode.cn id=1217 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> result;
        map<int, int> mp;
        for (int i : arr1)
        {
            mp[i]++;
        }
        for (int i : arr2)
        {
            for (int j = 0; j < mp[i]; j++)
            {
                result.push_back(i);
            }
            mp.erase(i);
        }
        for (auto p : mp)
        {
            for (int j = 0; j < p.second; j++)
            {
                result.push_back(p.first);
            }
        }
        return result;
    }
};
// @lc code=end
