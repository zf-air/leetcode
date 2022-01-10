/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n==1)
            return 1;
        if (n==2)
            return 2;
        int prePre=1, pre=2;
        int result = 0;
        for (int i = 3; i <= n; i++) {
            result = pre + prePre;
            prePre = pre;
            pre = result;
        }
        return result;
    }
};
// @lc code=end

