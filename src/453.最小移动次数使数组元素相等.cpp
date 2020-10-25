/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小移动次数使数组元素相等
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int m=nums[0];
        for(int i:nums){
            if(i<m)
                m=i;
        }
        for(int i:nums){
            sum+=i-m;
        }
        return sum;
    }
};
// @lc code=end

