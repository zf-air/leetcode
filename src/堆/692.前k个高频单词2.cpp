/*
 * @lc app=leetcode.cn id=692 lang=cpp
 *
 * [692] 前K个高频单词
 */

// @lc code=start
class Solution {
public:
    static bool cmp(const pair<string,int> &a,const pair<string,int> &b){
        if(a.second==b.second)
            return a.first<b.first;
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        // priority_queue<pair<string,int>,vector<pair<string,int> >,cmp > q;
        vector<pair<string,int> > v;
        map<string,int> mp;
        for(string s:words)
            mp[s]++;
        for(auto p:mp)
            v.push_back({p.first,p.second});
        sort(begin(v),end(v),cmp);
        vector<string> res;
        for(int i=0;i<k;i++){
            res.push_back(v[i].first);
        }
        return res;
    }
};
// @lc code=end

