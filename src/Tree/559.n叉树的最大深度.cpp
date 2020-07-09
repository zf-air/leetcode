/*
 * @lc app=leetcode.cn id=559 lang=cpp
 *
 * [559] N叉树的最大深度
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int MAX=0,num=0;
        for(auto T:root->children){
            num=maxDepth(T);
            MAX=max(MAX,num);
        }
        return MAX+1;
    }
};
// @lc code=end

