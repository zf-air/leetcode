/*
 * @lc app=leetcode.cn id=100300 lang=cpp
 *
 * [剑指 Offer 35] 复杂链表的复制
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution
{
public:
    /*
    题解:
        1.首先在原节点之间插入复制的节点，为了random方便
        2.将两个链表拆除，获得next节点
    */
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        // 1.在每个节点后面复制该节点
        Node *p = head;
        // 插入
        Node *p1 = nullptr, *p2 = nullptr;
        while (p)
        {
            p1 = new Node(p->val);
            p1->random = nullptr;
            p2 = p->next;
            p->next = p1;
            p1->next = p2;
            p = p2;
        }
        // 复制random指针
        p1 = head;
        while (p1)
        {
            p2 = p1->next;
            if (p1->random == nullptr)
            {
                p2->random = nullptr;
            }
            else
            {
                p2->random = p1->random->next;
            }
            p1 = p2->next;
        }
        // 2.拆分两个链表
        p1 = head;
        Node *result = head->next;
        while (p1)
        {
            p2 = p1->next;
            p1->next = p2->next;
            p1 = p2;
            if (p1->next == nullptr)
            {
                break;
            }
        }
        return result;
    }
};
// @lc code=end
