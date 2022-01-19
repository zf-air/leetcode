/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *p = new ListNode(0);
        p->next = head;
        ListNode *slow = p, *fast = head;
        while (fast)
        {
            if (fast->val == val)
            {
                slow->next = fast->next;
                fast = fast->next;
            }
            else
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        ListNode *result = p->next;
        delete p;
        return result;
    }
};
// @lc code=end
