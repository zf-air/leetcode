/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    // 非递归实现
    // ListNode *deleteDuplicates(ListNode *head)
    // {
    //     if (head == nullptr)
    //         return head;
    //     ListNode *p1 = head, *p2 = head->next;
    //     while (p2 != nullptr)
    //     {
    //         if (p1->val == p2->val)
    //         {
    //             p1->next = p2->next;
    //             p2->val = 0;
    //             p2 = p1->next;
    //         }
    //         else
    //         {
    //             p1 = p1->next;
    //             p2 = p2->next;
    //         }
    //     }
    //     return head;
    // }

    // 递归实现 自己的
    // ListNode *deleteDuplicates(ListNode *head)
    // {
    //     if (head == nullptr)
    //         return head;
    //     ListNode *p = head->next;
    //     if (p == nullptr)
    //         return head;
    //     if (head->val == p->val)
    //     {
    //         head->next = p->next;
    //         delete p;
    //         return deleteDuplicates(head);
    //     }
    //     head->next = deleteDuplicates(head->next);
    //     return head;
    // }

    //递归实现 老师的 相当于把链表压入堆栈，倒序处理
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *p = head->next;
        if (p == nullptr)
            return head;
        head->next = deleteDuplicates(head->next);
        return head->val == head->next->val ? head->next : head;
    }
};
// @lc code=end
