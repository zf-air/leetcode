/*
 * @lc app=leetcode.cn id=819 lang=cpp
 *
 * [819] 最常见的单词
 */

// @lc code=start
class Solution {
public:
    static bool cmp(const pair<string,int> &a,const pair<string,int> &b){
        return a.second>b.second;
    }
    string mostCommonWord(string s, vector<string>& banned) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        vector<pair<string,int> > v;
        map<string,int> mp;
        //字符串分割
        int i=0,j=s.size(),k=0;
        while(i<j){
            while(i<j&&isalpha(s[i]))
                i++;
            string res=s.substr(k,i-k);
            mp[res]++;
            while(i<j&&!isalpha(s[i]))
                i++;
            k=i;
        }
        //使用vector<pair<string,int>> 按值排序
        for(auto p:mp)
            v.push_back({p.first,p.second});
        sort(begin(v),end(v),cmp);
        mp.clear();
        for(string p:banned)
            mp[p]++;
        for(auto p:v){
            // if(mp.count(p.first)==0)
            if(mp[p.first]==0)
                return p.first;
        }
        return "";
    }
};
// @lc code=end

