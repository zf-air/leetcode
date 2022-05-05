/*
 * @lc app=leetcode.cn id=100298 lang=cpp
 *
 * [剑指 Offer 24] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *p1 = head;
        ListNode *p2 = new ListNode(0);
        p2->next = nullptr;
        while (head)
        {
            head = head->next;
            p1->next = p2->next;
            p2->next = p1;
            p1 = head;
        }
        ListNode *result = p2->next;
        delete p2;
        return result;
    }
};
// @lc code=end
