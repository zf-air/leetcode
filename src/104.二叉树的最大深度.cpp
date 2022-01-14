/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    // 递归实现
    // int maxDepth(TreeNode *root)
    // {
    //     if (root == nullptr)
    //         return 0;
    //     return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    // }

    // 循环实现
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        queue<TreeNode *> q;
        q.push(root);
        int size = 1;
        int i = 0;
        int result = 0;
        TreeNode *t;
        // 每次遍历一层的结点
        while (!q.empty())
        {
            size = q.size();
            i = 0;
            while (i < size)
            {
                t = q.front();
                q.pop();
                if (t->left != nullptr)
                {
                    q.push(t->left);
                }
                if (t->right != nullptr)
                {
                    q.push(t->right);
                }
                i++;
            }
            result++;
        }
        return result;
    }
};
// @lc code=end
