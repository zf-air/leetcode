/*
 * @lc app=leetcode.cn id=1009 lang=cpp
 *
 * [1009] 十进制整数的反码
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int N) {
        int res=0;
        vector<int> v;
        while(N>0){
            v.push_back(N|1);
            N>>=1;
        }
        int x=1;
        for(int i:v){
            res+=i*x;
            x*=2;
        }
        return res;
    }
};
// @lc code=end

