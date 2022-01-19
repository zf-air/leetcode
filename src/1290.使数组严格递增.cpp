/*
 * @lc app=leetcode.cn id=1411 lang=cpp
 *
 * [1290] 二进制链表转整数
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
    int getDecimalValue(ListNode *head)
    {
        int n = 0;
        ListNode *p = head;
        while (p != nullptr)
        {
            n = (n << 1) + p->val;
            p = p->next;
        }
        return n;
    }
};
// @lc code=end
