/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    // // 递归实现
    // vector<int> postorderTraversal(TreeNode *root)
    // {
    //     if (root != nullptr)
    //     {
    //         postorderTraversal(root->left);
    //         postorderTraversal(root->right);
    //         result.push_back(root->val);
    //     }
    //     return result;
    // }

    // 循环实现
    vector<int> postorderTraversal(TreeNode *root)
    {
        // pre结点记录上一个被访问的节点
        TreeNode *preNode;
        stack<TreeNode *> s;
        vector<int> result;
        while (root != nullptr || !s.empty())
        {
            while (root != nullptr)
            {
                s.push(root);
                root = root->left;
            }
            root = s.top();

            // 右子树为空或者右子树刚被访问过
            if (root->right == nullptr || preNode == root->right)
            {
                result.push_back(root->val);
                preNode = root;
                s.pop();
                root = nullptr;
            }
            else
            {
                root = root->right;
            }
        }
        return result;
    }
};
// @lc code=end
