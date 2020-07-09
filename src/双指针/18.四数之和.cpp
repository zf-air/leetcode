/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int> > res;
        if(nums.size()<4)
            return res;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size()-3;i++){
            if(i>0&&nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                int k=j+1,e=nums.size()-1;
                int num=target-nums[i]-nums[j];
                // if(num<nums[k])
                //     break;
                while(k<e){
                    if(nums[k]+nums[e]==num){
                        res.push_back(vector<int>{nums[i],nums[j],nums[k],nums[e]});
                        while(k<e&&nums[k]==nums[++k]);
                        while(k<e&&nums[e]==nums[--e]);
                    }
                    else if(nums[k]+nums[e]<num)
                        while(k<e&&nums[k]==nums[++k]);
                    else
                        while(k<e&&nums[e]==nums[--e]);
                }
            }
        }
        return res; 
    }
};
// @lc code=end

