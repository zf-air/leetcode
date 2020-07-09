/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!q&&!p)
            return true;
        else if((!p&&q)||(p&&!q))
            return false;
        else{
            if(p->val==q->val){
                return isSameTree(p->left,q->left)&&
                isSameTree(p->right,q->right);
            }
            else
                return false;
        }
        return true;
    }
};
// @lc code=end

