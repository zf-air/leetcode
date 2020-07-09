/*
 * @lc app=leetcode.cn id=892 lang=cpp
 *
 * [892] 三维形体的表面积
 */

// @lc code=start
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                res+=grid[i][j]*6;
                if(grid[i][j]>1)
                    res-=(grid[i][j]-1)<<1;
                if(j+1<grid[0].size())
                    res-=min(grid[i][j],grid[i][j+1])<<1;
                if(i+1<grid.size())
                    res-=min(grid[i][j],grid[i+1][j])<<1;
            }
        }
        return res;
    }
};
// @lc code=end

