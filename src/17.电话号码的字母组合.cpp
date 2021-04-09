/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    unordered_map<char, string> table{
        {'0', " "}, {'1',"*"}, {'2', "abc"},
        {'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
        {'6',"mno"}, {'7',"pqrs"},{'8',"tuv"},
        {'9',"wxyz"}
    };
    vector<string> res;
    vector<string> letterCombinations(string digits) {
         int length = digits.size();
         if(length == 0){
             return res;
         }
         DFS(digits,0,"");
         return res;
    }
    void DFS(string digits,int i,string s){
        if(i == digits.size()){
            res.push_back(s);
            return ;
        }
        string t = table[digits[i]];
        for(int j=0;j<t.size();j++){
            string ss = s;
            ss+=t[j];
            DFS(digits,i+1,ss);
        }
    }
};
// @lc code=end

