/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int chars[4]={0};
        for(auto ch:moves){
            switch (ch)
            {
            case 'U':
                chars[0]++;
                break;
            case 'D':
                chars[1]++;
                break;
            case 'L':
                chars[2]++;
                break;
            case 'R':
                chars[3]++;
                break;
            default:
                break;
            }
        }
        if(chars[0]==chars[1]&&chars[2]==chars[3])
            return true;
        return false;

    }
};
// @lc code=end

