/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    struct cmp{
        bool operator(pair<int,int> &a,pair<int,int> &b){
            return a.second>=b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue< pair<int,int>,vector<pair<int,int> >,cmp> q;
        map<int,int> m;
        for(int num:nums)
            m[num]++;
        for(auto p:m)
            q.push({p.first,p.second});
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back((q.top()).first);
            q.pop();
        }
        return res;
    }
};
// @lc code=end

