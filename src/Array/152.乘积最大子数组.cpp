/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int res=nums[0];
        int d=nums[0],x=nums[0];
        for(int i=1;i<nums.size();i++){
            int m;
            m=max(nums[i],max(d*nums[i],x*nums[i]));
            x=min(nums[i],min(d*nums[i],x*nums[i]));
            d=m;
            res=max(res,d);
        }
        return res;
    }
};
// @lc code=end

