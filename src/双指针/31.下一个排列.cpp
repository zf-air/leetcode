/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size();       
        int e=len-1;
        while(e>0&&nums[e]<=nums[e-1])
            e--;
        if(e==0)
            reverse(begin(nums),end(nums));
        else{
            int t=len-1;
            while(t>0&&nums[t]<=nums[e-1])
                t--;
            swap(nums[e-1],nums[t]);
            reverse(begin(nums)+e,end(nums));
        }
    }
};
// @lc code=end

