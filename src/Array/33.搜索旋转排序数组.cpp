/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size();
        while(s<=e){
            int m=s+(e-s)>>1;
            if(nums[m]==target)
                return m;
            else if(nums[m]<nums[e]){
                if(nums[e]>target&&nums[m]<target)
                    s=m+1;
                else
                    e=m-1;
            }
            else{
                if(nums[m]>target&&nums[s]<target)
                    e=m-1;
                else
                    s=m+1;
            }
        }
        return -1;
    }
};
// @lc code=end

