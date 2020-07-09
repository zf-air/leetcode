/*
 * @lc app=leetcode.cn id=804 lang=cpp
 *
 * [804] 唯一摩尔斯密码词
 */

// @lc code=start
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string nums[26]={".-","-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..","--","-.",
        "---",".--.","--.-",".-.","...","-","..-","...-",
        ".--","-..-","-.--","--.."};
        map<string,int> mp;
        for(string s:words){
            string res;
            for(char ch:s){
                res+=nums[ch-'a'];
            }
            mp[res]++;
        }
        return mp.size();
        
    }
};
// @lc code=end

