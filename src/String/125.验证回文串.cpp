/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isres(char ch){
        if(isdigit(ch)||islower(ch))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(isupper(s[i]))
                s[i]+=32;
        }
        int i=0,j=s.size()-1;
        while(i<j){
            if(!isres(s[i])){
                i++;
                continue;
            }
            if(!isres(s[j])){
                j--;
                continue;
            }
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

