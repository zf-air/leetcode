/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    // vector<int> preorderTraversal(TreeNode *root)
    // {
    //     if (root != nullptr)
    //     {
    //         result.push_back(root->val);
    //         preorderTraversal(root->left);
    //         preorderTraversal(root->right);
    //     }
    //     return result;
    // }

    // 循环实现
    vector<int> preorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> s;
        while (root != nullptr || !s.empty())
        {
            while (root != nullptr)
            {
                result.push_back(root->val);
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            root=root->right;
        }
        return result;
    }
};
// @lc code=end
