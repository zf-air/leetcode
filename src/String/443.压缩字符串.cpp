/*
 * @lc app=leetcode.cn id=443 lang=cpp
 *
 * [443] 压缩字符串
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        int i=1,j=chars.size(),k=0,tag=0;
        if(chars.size()==1)
            return 1;
        while(i<=j){
            while(i<j&&chars[i]==chars[i-1])
                i++;
            chars[tag++]=chars[i-1];
            int n=i-k;
            if(n>=2){
                string s=to_string(n);
                for(char ch:s)
                    chars[tag++]=ch;
            }
            k=i++;
        }
        return tag;
    }
};
// @lc code=end

