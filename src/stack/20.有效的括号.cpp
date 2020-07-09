/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<int> sk;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='[')
                sk.push(ch);
            else {
                if(ch==')'){
                    if(!sk.empty()&&sk.top()=='(')
                        sk.pop();
                    else
                        return false;
                }
                else if(ch==']'){
                    if(!sk.empty()&&sk.top()=='[')
                        sk.pop();
                    else
                        return false;
                }
                else if(ch=='}'){
                    if(!sk.empty()&&sk.top()=='{')
                        sk.pop();
                    else
                        return false;
                }
            }
        }
        if(!sk.empty())
            return false;
        return true;
    }
};
// @lc code=end

