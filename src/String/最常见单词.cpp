#include <iostream>
#include <bits/stdc++.h>
static bool cmp(const pair<string,int> &a,const pair<string,int> &b){
        return a.second>b.second;
}
    int main() {
        string s="Bob hit a ball, the hit BALL flew far after it was hit."
        vector<string> banned;
        banned.push_back("hit");
        transform(s.begin(),s.end(),s.begin(),::tolower);
        vector<pair<string,int> > v;
        map<string,int> mp;
        //字符串分割
        int i=0,j=s.size(),k=0;;
        while(i<j){
            if(s[i]==','||s[i]=='.')
                i++;
            while(i<j&&s[i]!=' ')
                i++;
            string res=s.substr(k,i-k);
            mp[res]++;
            k=++i;
        }
        //使用vector<pair<string,int>> 按值排序
        for(auto p:mp)
            v.push_back({p.first,p.second});
        sort(begin(v),end(v),cmp);
        mp.clear();
        for(string p:banned)
            mp[p]++;
        for(auto p:v){
            if(mp[p.first]==0)
                return p.first;
        }
        return "";
    }