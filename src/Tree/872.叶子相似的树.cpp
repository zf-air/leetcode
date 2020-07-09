/*
 * @lc app=leetcode.cn id=872 lang=cpp
 *
 * [872] 叶子相似的树
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1,s2;
        yezi(root1,s1);
        yezi(root2,s2);
        // std::cout<<s1<<" "<<s2;
        if(s1.size()==s2.size()){
            for(int i=0;i<s1.size();i++){
                if(s1[i]!=s2[i])
                    return false;
            }
        }
        else
            return false;
        return true;
    }
    void yezi(TreeNode* root,string &s){
        if(!root->left&&!root->right)
            s+='0'+root->val;
        else if(!root->right)
            yezi(root->left,s);
        else if(!root->left)
            yezi(root->right,s);
        else{
            yezi(root->left,s);
            yezi(root->right,s);
        }
    }
};
// @lc code=end

