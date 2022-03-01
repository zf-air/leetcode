/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    // 用快慢指针可以知道链表元素个数
    // 先查找再删除
    // ListNode *removeNthFromEnd(ListNode *head, int n)
    // {
    //     int t = 0;
    //     t = findNthFromEnd(head, n);
    //     ListNode *p = head;
    //     // 删除头结点
    //     if (t == 0)
    //     {
    //         head = head->next;
    //     }
    //     else
    //     {
    //         for (int i = 0; i < t-1; i++)
    //         {
    //             p = p->next;
    //         }
    //         p->next = p->next->next;
    //     }
    //     return head;
    // }
    // // 查找元素下标
    // int findNthFromEnd(ListNode *head, int n)
    // {
    //     ListNode *slow = head, *fast = head;
    //     int len = 0, k = 0;
    //     while (fast != nullptr && fast->next != nullptr)
    //     {
    //         k++;
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     if (fast == nullptr)
    //     {
    //         len = k * 2;
    //     }
    //     else
    //     {
    //         len = k * 2 + 1;
    //     }
    //     // 计算要删除节点的下标,从0开始
    //     int t = len - n;
    //     return t;
    // }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int t = 0;
        ListNode *p;
        p = findNthFromEnd(head, n);
        // 删除头结点
        if (p == nullptr)
        {
            head = head->next;
        }
        else
        {
            p->next = p->next->next;
        }
        return head;
    }
    // 1.查找元素节点，通过计算个数
    // ListNode *findNthFromEnd(ListNode *head, int n)
    // {
    //     ListNode *slow = head, *fast = head;
    //     int len = 0, k = 0;
    //     while (fast != nullptr && fast->next != nullptr)
    //     {
    //         k++;
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     if (fast == nullptr)
    //     {
    //         len = k * 2;
    //     }
    //     else
    //     {
    //         len = k * 2 + 1;
    //     }
    //     // 查找要删除的节点
    //     int t = len - n;
    //     ListNode *p = head;
    //     if(t==0){
    //         return nullptr;
    //     }
    //     else if (t <= k)
    //     {
    //         for (int i = 0; i < t - 1; i++)
    //         {
    //             p = p->next;
    //         }
    //     }
    //     else if (t > k)
    //     {
    //         p = slow;
    //         for (int i = 0; i < t - k - 1; i++)
    //         {
    //             p = p->next;
    //         }
    //     }
    //     return p;
    // }

    // 2.查找元素节点，先让快慢指针相差n个节点，再一起走
    ListNode *findNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head, *fast = head;
        // 隔开n个元素
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        if (fast == nullptr)
        {
            return nullptr;
        }
        fast = fast->next;
        // 一起往前走，步长为1
        while (fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};
// @lc code=end
