/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {
public:
    bool flag=false;
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size()==0||word.size()==0)
            return false;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                bool t=dfs(board,i,j,word,0);
                if(t==true)
                    return t;
            }
        }
        return flag;
    }
    bool dfs(vector<vector<char>> &board,int i,int j,string word,int k){
        if(k==word.size()){
            flag=true;
            return true;
        }
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||word[k]!=board[i][j])
            return false;
        if(!flag){
            char c=board[i][j];
            board[i][j]='.';
            bool res1=dfs(board,i-1,j,word,k+1);
            bool res2=dfs(board,i,j+1,word,k+1);
            bool res3=dfs(board,i+1,j,word,k+1);
            bool res4=dfs(board,i,j-1,word,k+1);
            board[i][j]=c;
            return res1||res2||res3||res4;
        }
        else
            return true;
    }
};
// @lc code=end

