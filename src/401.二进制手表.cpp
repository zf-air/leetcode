/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    vector<int> mark(10,0);
    vector<vector<int> > v;
    void dfs(vector<int> &mark,int num){
        if(num==0){
            v.push_back(mark);
            return ;
        }

        int h_sum=0;
        for(int i=0;i<4;i++){
            h_sum+=mark[i]*pow(2,i);
        }    
        for(int i=0;i<4;i++){
            if(!mark[i]&&(h_sum+mark[i]*pow(2,i))<=11){
                mark[i]=1;
                dfs(mark,num-1);
                mark[i]=0;
            }
        }

        int m_sum=0;
        for(int i=4;i<10;i++){
            m_sum+=mark[i]*pow(2,i-4);
        }
        for(int i=4;i<10;i++){
            if(!mark[i]&&(m_sum+mark[i]*pow(2,i-4))<=59){
                mark[i]=1;
                dfs(mark,num-1);
                mark[i]=0;
            }
        }

    }
    vector<string> readBinaryWatch(int num) {
        dfs(mark,num);
        vector<string> res;
        for(int i=0;i<v.size();i++){
            string s;
            int h=0;
            for(int i=0;i<4;i++){
                h+=mark[i]*pow(2,i);
            }
            int m=0;
            for(int i=4;i<10;i++){
                m+=mark[i]*pow(2,i-4);
            }
            s+=(h+'0');
            s+=":";
            if(m<10)
                s+='0';
            s+=(m+'0');
            res.push_back(s);
        }
        return res;
    }
};
// @lc code=end

