/*
 * @lc app=leetcode.cn id=692 lang=cpp
 *
 * [692] 前K个高频单词
 */

// @lc code=start
class Solution {
public:
    struct cmp{
        bool operator() (pair<string,int> &a,pair<string,int> &b){
            if(a.second==b.second)
                return a.first>b.first;
            return a.second<b.second;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<string,int>,vector<pair<string,int> >,cmp > q;
        map<string,int> mp;
        for(string s:words)
            mp[s]++;
        for(auto p:mp)
            q.push({p.first,p.second});
        vector<string> res;
        for(int i=0;i<k;i++){
            res.push_back((q.top()).first);
            q.pop();
        }
        return res;
    }
};
// @lc code=end

