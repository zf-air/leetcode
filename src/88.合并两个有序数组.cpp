/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution
{
public:
    // 额外开辟一个数组
    // void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    // {
    //     int i = 0, j = 0;
    //     vector<int> nums3;
    //     while (i < m && j < n)
    //     {
    //         if (nums1[i] <= nums2[j])
    //         {
    //             nums3.push_back(nums1[i++]);
    //         }
    //         else
    //         {
    //             nums3.push_back(nums2[j++]);
    //         }
    //     }
    //     while (i < m)
    //     {
    //         nums3.push_back(nums1[i++]);
    //     }
    //     while (j < n)
    //     {
    //         nums3.push_back(nums2[j++]);
    //     }
    //     nums1.clear();
    //     for (int i = 0; i < m + n; i++)
    //     {
    //         nums1.push_back(nums3[i]);
    //     }
    // }

    // 不额外开辟数组，直接在nums1操作
    // 倒序进行比较
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1;
        int k = nums1.size() - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[k--] = nums2[j--];
            }
            else
            {
                nums1[k--] = nums1[i--];
            }
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};
// @lc code=end
