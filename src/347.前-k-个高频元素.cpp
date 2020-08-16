/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > q;
        map<int,int> m;
        for(int num:nums)
            m[num]++;
        vector<int> res;
        for(auto p:m){
            if(q.size()<k){
                q.push({p.second,p.first});
            }
            else{
                if(p.second>(q.top()).first){
                    q.pop();
                    q.push({p.second,p.first});
                }
            }
        }
        for(int i=0;i<k;i++){
            res.push_back((q.top()).second);
            q.pop();        
        }
        return res;
    }
};
// @lc code=end

