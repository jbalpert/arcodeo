/*
 * getIntersectionNode.h
 * Arcodeo Solution
 * LeetCode Problem 160
 */
#ifndef HASCYCLE_H
#define HASCYCLE_H

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
#endif
