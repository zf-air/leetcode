/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        stack<pair<char,TreeNode*> > s;
        s.push({'w',root});
        while(s.size()){
            pair<char,TreeNode*> p;
            p=s.top();
            s.pop();
            if(p.second==NULL)
                continue;
            if(p.first=='w'){
                s.push({'w',p.second->right});
                s.push({'g',p.second});
                s.push({'w',p.second->left});
            }
            else{
                res.push_back(p.second->val);
            }
        }
        return res;
    }
};
// @lc code=end

