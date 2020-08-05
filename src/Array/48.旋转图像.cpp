/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int t;
        //对角翻转
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++){
                t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
                // swap(matrix[i][j],matrix[j][i]);
            }
        //左右翻转
        for(int i=0;i<n;i++)
            for(int j=0;j<n/2;j++){
                t=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=t;
                // swap(matrix[i][j],matrix[i][n-j-1]);
            }
    }
};
// @lc code=end

