/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    //求长度差，从同一个地方开始比较
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *h1 = headA, *h2 = headB;
        int l1 = 0, l2 = 0, d = 0;
        while (h1 != nullptr)
        {
            l1++;
            h1 = h1->next;
        }
        while (h2 != nullptr)
        {
            l2++;
            h2 = h2->next;
        }
        if (l1 > l2)
        {
            d = l1 - l2;
            h1 = headA;
            h2 = headB;
        }
        else
        {
            d = l2 - l1;
            h1 = headB;
            h2 = headA;
        }
        for (int i = 0; i < d; i++)
        {
            h1 = h1->next;
        }
        while (h1 != nullptr)
        {
            if (h1 == h2)
            {
                break;
            }
            h1 = h1->next;
            h2 = h2->next;       
        }
        if (h1 == nullptr)
        {
            return nullptr;
        }
        return h1;
    }

};
// @lc code=end
