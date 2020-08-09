/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > res;
        res.push_back({});
        for(int i=0;i<nums.size();i++){
            int size=res.size();
            for(int j=0;j<size;j++){
                res.push_back(res[j]);
                res[size+j].push_back(nums[i]);
            }
        }
        return res;
    }
};
// @lc code=end

