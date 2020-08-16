/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q1;
        for(int i=0;i<k;i++)
            q1.push(nums[i]);
        deque<int> q2;
        for(int num:q1)
            q2.push_back(num);
        for(int i=k;i<nums.size();i++){
            if(nums[i]<=q2.back())
                continue;
            else{
                q2.pop_back();
                
            }
        }
    }
};
// @lc code=end

