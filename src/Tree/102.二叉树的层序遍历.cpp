/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int> > res;
        if(root==NULL)
            return res;
        q.push(root);
        int t=0;//每一层的个数
        vector<int> v;
        while(q.size()){
            t=q.size();
            while(t){
                TreeNode* T;
                T=q.front();
                q.pop();
                v.push_back(T->val);
                if(T->left&&T->right){
                    q.push(T->left); 
                    q.push(T->right);               
                }
                else if(T->left&&!T->right)
                    q.push(T->left);
                else if(!T->left&&T->right)
                    q.push(T->right);
                t--;
            }
            res.push_back(v);
            v.clear();
        }
        return res;
    }
};
// @lc code=end

