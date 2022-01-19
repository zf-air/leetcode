/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    // ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    // {
    //     ListNode *l3 = new ListNode(0);
    //     l3->next = nullptr;
    //     ListNode *result = l3;
    //     int c = 0;
    //     int s = 0;
    //     while (l1 && l2)
    //     {
    //         ListNode *t = new ListNode(0);
    //         t->next = nullptr;
    //         s = (l1->val + l2->val + c) % 10;
    //         c = (l1->val + l2->val + c) / 10;
    //         t->val = s;
    //         l3->next = t;
    //         l3 = t;
    //         l1 = l1->next;
    //         l2 = l2->next;
    //     }

    //     // l1 l2是否遍历完
    //     ListNode *p = nullptr;
    //     if (l1 != nullptr)
    //     {
    //         p = l1;
    //     }
    //     else if (l2 != nullptr)
    //     {
    //         p = l2;
    //     }
    //     while (p != nullptr)
    //     {
    //         ListNode *t = new ListNode(0);
    //         t->next = nullptr;
    //         s = (p->val + c) % 10;
    //         c = (p->val + c) / 10;
    //         t->val = s;
    //         l3->next = t;
    //         l3 = t;
    //         p = p->next;
    //         if (c == 0)
    //         {
    //             l3->next = p;
    //             break;
    //         }
    //     }

    //     // 最后是否还有进位
    //     if (c == 1)
    //     {
    //         ListNode *t = new ListNode(1);
    //         t->next = nullptr;
    //         l3->next = t;
    //     }
    //     result = result->next;
    //     return result;
    // }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // 在l1上操作，不开辟新链表
        ListNode *result = l1;
        int c = 0;
        int s = 0;
        ListNode *l3;
        // 先处理l1 l2共同的部分
        while (l1 && l2)
        {
            s = (l1->val + l2->val + c) % 10;
            c = (l1->val + l2->val + c) / 10;
            l1->val = s;
            l3 = l1;
            l1 = l1->next;
            l2 = l2->next;
        }

        // l1 l2不等长，处理剩下的部分
        ListNode *p = nullptr;
        if (l1 != nullptr)
        {
            p = l1;
        }
        else if (l2 != nullptr)
        {
            l3->next = l2;
            p = l2;
        }
        while (p != nullptr)
        {
            s = (p->val + c) % 10;
            c = (p->val + c) / 10;
            p->val = s;
            l3 = p;
            p = p->next;
            if (c == 0)
            {
                break;
            }
        }

        // 最后是否还有进位
        if (c == 1)
        {
            ListNode *t = new ListNode(1);
            t->next = nullptr;
            l3->next = t;
        }
        return result;
    }
};
// @lc code=end
