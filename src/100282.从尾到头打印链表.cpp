/*
 * @lc app=leetcode.cn id=100282 lang=cpp
 *
 * [剑指 Offer 06] 从尾到头打印链表
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
    vector<int> reversePrint(ListNode *head)
    {
        vector<int> result;
        stack<int> s;
        LinkNode *p = head;
        while (p)
        {
            s.push(p->val);
            p = p->next;
        }
        while (!s.empty())
        {
            result.push_back(s.top());
            s.pop();
        }
        return result;
    }
};
// @lc code=end
