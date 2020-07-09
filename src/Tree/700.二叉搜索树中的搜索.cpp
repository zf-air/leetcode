/*
 * @lc app=leetcode.cn id=700 lang=cpp
 *
 * [700] 二叉搜索树中的搜索
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr)
            return nullptr;
        TreeNode* T=nullptr;
        if(root->val==val)
            return root;
        else{
            T=searchBST(root->left,val);
            if(!T)
                T=searchBST(root->right,val);
        }
        return T;
    }
};
// @lc code=end

