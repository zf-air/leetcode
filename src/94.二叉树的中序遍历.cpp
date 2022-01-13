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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> result;

    // 递归实现
    // vector<int> inorderTraversal(TreeNode *root)
    // {
    //     if (root != nullptr)
    //     {
    //         inorderTraversal(root->left);
    //         result.push_back(root->val);
    //         inorderTraversal(root->right);
    //     }
    //     return result;
    // }

    // 循环实现
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode*> s;
        while (root != nullptr || !s.empty())
        {
            while (root != nullptr)
            {
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            result.push_back(root->val);
            root = root->right;
        }
        return result;
    }
};
// @lc code=end
