/*
 * @lc app=leetcode.cn id=561 lang=cpp
 *
 * [561] 数组拆分 I
 */

// @lc code=start
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i+=2)
            sum+=nums[i];
        return sum;
    }
};
// @lc code=end

