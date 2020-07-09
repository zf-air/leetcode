/*
 * @lc app=leetcode.cn id=1365 lang=cpp
 *
 * [1365] 有多少小于当前数字的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int arr[101]={0};
        for(auto i:nums)
            arr[i]++;
        int t=arr[0];
        for(int i=1;i<101;i++){
            int c=arr[i];
            arr[i]=t;
            t+=c;
        }
        arr[0]=0;
        vector<int> res;
        for(auto i:nums){
            res.push_back(arr[i]);
        }
        return res;
    }
};
// @lc code=end

