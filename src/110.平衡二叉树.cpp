/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        return contrast(root) != -1;
    }
    int contrast(TreeNode *t)
    {
        if (t == nullptr)
            return 0;
        int left = contrast(t->left);
        int right = contrast(t->right);
        if (left == -1 || right == -1 || abs(left - right) > 1)
        {
            return -1;
        }
        return max(contrast(t->left), contrast(t->right)) + 1;
    }
};
// @lc code=end
