/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    // 头插法
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *start = new ListNode(0);
        start->next = nullptr;
        ListNode *p, *t;
        while (head != nullptr)
        {
            p = head->next;
            t = start->next;
            start->next = head;
            head->next = t;
            head = p;
        }
        p = start->next;
        delete start;
        return p;
    }
};
// @lc code=end
