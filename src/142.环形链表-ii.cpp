/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    // 先找到环，在找关系
    // b站花云田的讲解，分成三段，x,y,z
    // 快指针走的距离是慢指针的两倍
    // 得出关系 x=(N-2)(y+z)+z
    // 重点就是数学关系推导，忘了就看视频讲解，快进到讲解的部分
    ListNode *detectCycle(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;
        bool loopExist = false;
        ListNode *slowPtr = head, *fastPtr = head;
        while (fastPtr->next != nullptr && fastPtr->next->next != nullptr)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if (slowPtr == fastPtr)
            {
                loopExist = true;
                break;
            }
        }
        // 有环
        if (loopExist)
        {
            slowPtr = head;
            while (slowPtr != fastPtr)
            {
                slowPtr = slowPtr->next;
                fastPtr = fastPtr->next;
            }
            return slowPtr;
        }
        return nullptr;
    }
};
// @lc code=end
