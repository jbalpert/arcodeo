/*
 * hasCycle.h
 * Arcodeo Solution
 * LeetCode Problem 136
 */
#ifndef HASCYCLE_H
#define HASCYCLE_H

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head);

#endif
