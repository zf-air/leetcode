/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;  

        bool res=false;
        vector<int> st;
        st.push_back(n-1);
        for(int i=n-2;i>=0;i--){
            bool flag=false;
            for(int j=st.size()-1;j>=0;j--){
                if(i+nums[i]>=st[j]){
                    flag=true;
                    st.push_back(i);
                    break;
                }
            }
            if(i==0&&flag==true)
                res=true;
        }
        return res;
    }
};
// @lc code=end

