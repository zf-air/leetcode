/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {   
        int n=nums.size();
        if(n==1)
            return true;       
        map<int,bool> mp;
        mp.insert({n-1,true});

        // for(int i=n-2;i>=0;i--){
        //     int j=
        // }
        return mp[n-1];
    }
};
// @lc code=end

