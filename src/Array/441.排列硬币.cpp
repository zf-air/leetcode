/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:    
    int arrangeCoins(int n) {
        long sum=0;
        if(n==0)
            return 0;
        for(int i=1;i<=n;i++){
            sum+=i;
            if(sum>n)
                return i-1;
        }
        return 1;
    }
};
// @lc code=end

