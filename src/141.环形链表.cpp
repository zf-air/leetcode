/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    // 快慢指针
    bool hasCycle(ListNode *head)
    {
        if (!head)
            return false;
        ListNode *slowPtr = head, *fastPtr = head;
        // 慢指针一次走一个，快指针一次走两个
        // 没有环的话只需要判断快指针是否越界，有环不会越界
        while (fastPtr->next != nullptr && fastPtr->next->next != nullptr)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if (slowPtr == fastPtr)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
