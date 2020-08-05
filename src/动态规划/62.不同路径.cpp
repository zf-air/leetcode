/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m+1][n+1];
        for(int i=0;i<n+1;i++)
            dp[0][i]=0;
        for(int i=0;i<m+1;i++)
            dp[i][0]=0;
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};
// @lc code=end

