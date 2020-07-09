/*
 * @lc app=leetcode.cn id=1455 lang=cpp
 *
 * [1455] 检查单词是否为句中其他单词的前缀
 */

// @lc code=start
class Solution {
public:
    int isPrefixOfWord(string s, string searchWord) {
        int i=0,j=s.size(),k=0,num=0;
        while(i<j){
            while(i<j&&s[i]!=' ')
                i++;
            string res=s.substr(k,i-k);
            num++;
            if(res.size()>=searchWord.size()){
                if(res.find(searchWord)==0)
                    return num;
            }
            k=++i;           
        }
        return -1;
    }
};
// @lc code=end

