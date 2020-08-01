/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 0)
            return s;
        int ll=0,rr=0;
        int res=1;
        
        for(int i=0;i<s.length();i++){
            int l=i-1,r=i+1;
            while (l>=0&&r<s.length()&&s[l]==s[r])
            {
                if(r-l+1>res){
                    ll=l;
                    rr=r;
                    res=r-l+1;
                }
                l--;
                r++;
            }

            l=i,r=i+1;
            while (l>=0&&r<s.length()&&s[l]==s[r])
            {
                if(r-l+1>res){
                    ll=l;
                    rr=r;
                    res=r-l+1;
                }
                l--;
                r++;
            }           
        }
        std::cout<<ll<<" "<<rr+1;
        return s.substr(ll,rr+1);
    }
};
// @lc code=end

