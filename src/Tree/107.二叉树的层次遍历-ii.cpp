/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int> > res;
        if(!root)
            return res;
        q.push(root);            
        // res.push_back(vector<int>{root->val});
        while(q.size()){
            vector<int> v;  
            for(int i=0;i<q.size();i++){
                TreeNode* T=q.front();
                v.push_back(T->val);
                if(T->left){
                    q.push(T->left);
                    // v.push_back(T->left->val);
                }
                if(T->right){
                    q.push(T->right);
                    // v.push_back(T->right->val);
                }
                q.pop();
            }         
            res.push_back(v);
        }
        reverse(begin(res),end(res));
        return res;
    }
};
// @lc code=end

