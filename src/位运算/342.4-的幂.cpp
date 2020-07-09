/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    int get_count(int num){
        int count=0;
        while(num>0){
            num=(num>>1);
            count++;
        } 
        return count;
    }
    bool isPowerOfFour(int num) {
        if(num<=0)
            return false;
        if(num==1)
            return true;
        int i=0; 
        int count=0;
        count=get_count(num);
        bool flag=false;
        while(i<count){
            int n=1&(num>>i);
            // std::cout<<n<<endl;
            if(i==0||i==1){
                if(n==1)
                    return false;
            }
            else if(i%2==0&&n==1){
                if(!flag)
                    flag=true;
                else
                    return false;
            }         
            else if(i%2==1&&n==1)
                return false;       
            i++;
        }
        return true;
    }
};
// @lc code=end

