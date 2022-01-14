/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    // bool isSymmetric(TreeNode *root)
    // {
    //     if (root == nullptr)
    //     {
    //         return true;
    //     }
    //     return isDuichen(root->left, root->right);
    // }
    // bool isDuichen(TreeNode *t1, TreeNode *t2)
    // {
    //     if (t1 == nullptr && t2 == nullptr)
    //     {
    //         return true;
    //     }
    //     else if (t1 != nullptr && t2 != nullptr)
    //     {
    //         if (t1->val == t2->val)
    //         {
    //             return isDuichen(t1->left, t2->right) && isDuichen(t1->right, t2->left);
    //         }
    //         else
    //         {
    //             return false;
    //         }
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    // 循环实现，用队列
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        queue<TreeNode *> q;
        q.push(root->left);
        q.push(root->right);
        TreeNode *t1, *t2;
        while (!q.empty())
        {
            // 每次取俩进行比较
            t1 = q.front();
            q.pop();
            t2 = q.front();
            q.pop();
            if (t1 == nullptr && t2 == nullptr)
            {
                continue;
            }
            else if (t1 != nullptr && t2 != nullptr)
            {
                if (t1->val != t2->val)
                {
                    return false;
                }
                else
                {
                    // 注意加入的顺序
                    q.push(t1->left);
                    q.push(t2->right);
                    q.push(t1->right);
                    q.push(t2->left);
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
