/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(string ss:ops){
            if(isdigit(ss[0]-'0'))
                s.push(ss[0]-'0');
            else if(ss[0]=='C')
                s.pop();
            else if(ss[0]=='D')
                s.push(s.top()*2);
            else{
                int t1=s.top();
                s.pop();
                int t2=s.top();
                s.push(t1);
                s.push(t1+t2);
            }
        }     
        int res=0;
        while(!s.empty()){
            // std::cout<<s.top()<<" ";
            res+=s.top();
            s.pop();
        }
        return res;
    }
};
// @lc code=end

