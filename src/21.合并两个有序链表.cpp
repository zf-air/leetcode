/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    //循环解法
    // ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    // {
    //     ListNode *result = new ListNode(0);
    //     result->next = nullptr;
    //     ListNode *p = result;
    //     ListNode *d = result; //为了释放空间
    //     while (l1 != nullptr && l2 != nullptr)
    //     {
    //         if (l1->val < l2->val)
    //         {
    //             p->next = l1;
    //             l1 = l1->next;
    //         }
    //         else
    //         {
    //             p->next = l2;
    //             l2 = l2->next;
    //         }
    //         p = p->next;
    //     }
    //     if (l1 != nullptr)
    //     {
    //         p->next = l1;
    //     }
    //     else
    //     {
    //         p->next = l2;
    //     }
    //     result = result->next;
    //     delete d;
    //     return result;
    // }

    //递归解法
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;
        if (l1->val < l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
};

// @lc code=end
