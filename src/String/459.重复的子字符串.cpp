/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    static bool cmp(const pair<char,int> &a,const pair<char,int> &b){
        return a.second<b.second;
    }
    bool repeatedSubstringPattern(string s) {
        vector<pair<char,int> > v;
        map<char,int> mp;
        for(char ch:s)
            mp[ch]++;
        for(auto p:mp)
            v.push_back({p.first,p.second});
        sort(v.begin(),v.end(),cmp);
        int num=v[0].second;
        for(auto p:v){
            if(p.second==1)
                return false;
            if(p.second%num!=0)
                return false;
        }
        return true;
    }
};
// @lc code=end

