/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                int ss=m-1;
                while(ss>=0&&nums[ss]==nums[m])
                    ss--;
                int ee=m+1;
                while(ee<nums.size()&&nums[ee]==nums[m])
                    ee++;
                res[0]=++ss;
                res[1]=--ee;
                break;
            }
            else if(nums[m]>target)
                e=m-1;
            else
                s=m+1;
        }
        return res;
    }
};
// @lc code=end

