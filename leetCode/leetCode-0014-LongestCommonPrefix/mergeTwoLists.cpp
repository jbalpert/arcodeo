/*
 * mergeTwoLists.cpp
 * Arcodeo Solution
 * LeetCode Problem 21
 */

#include "mergeTwoLists.h"
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode dummy(-1);
    ListNode *res = &dummy;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            res->next = l1;
            l1 = l1->next;
        }
        else
        {
            res->next = l2;
            l2 = l2->next;
        }
        res = res->next;
    }
    res->next = (l1) ? l1 : l2;
    return dummy.next;
}