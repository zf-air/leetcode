/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    // 转为字符串比较
    // bool isPalindrome(ListNode *head)
    // {
    //     string s;
    //     ListNode *p = head;
    //     int n = 0;
    //     while (p)
    //     {
    //         s += p->val;
    //         p = p->next;
    //         n++;
    //     }
    //     int i = 0, j = n - 1;
    //     while (i <= j && s[i] == s[j])
    //     {
    //         i++;
    //         j--;
    //     }
    //     if (i > j)
    //         return true;
    //     return false;
    // }

    // 快慢指针找个数，反转后半段链表，在进行比较
    bool isPalindrome(ListNode *head)
    {
        ListNode *low = head, *fast = head;
        // 快慢指针
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            fast = fast->next->next;
            low = low->next;
        }

        // 后半段反转
        fast = head;
        if (low->next != nullptr)
        {
            low = reverseList(low->next);
        }
        // 只有一个元素
        else
            return low;

        // fast在前，low在后,进行比较
        while (low)
        {
            if (low->val != fast->val)
                return false;
            low = low->next;
            fast = fast->next;
        }
        return true;
    }
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
