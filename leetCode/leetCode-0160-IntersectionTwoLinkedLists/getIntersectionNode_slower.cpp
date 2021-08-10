/*
 * getIntersectionNode_slower.cpp
 * Arcodeo Solution
 * LeetCode Problem 160
 */

#include <iostream>

#include "getIntersectionNode.h"

using namespace std;

size_t getSize(ListNode *head)
{
    size_t count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    size_t a_size = getSize(headA), b_size = getSize(headB);
    if (a_size > b_size)
    {
        size_t n = a_size - b_size;
        while (n--)
        {
            headA = headA->next;
        }
    }
    else
    {
        size_t n = b_size - a_size;
        while (n--)
        {
            headB = headB->next;
        }
    }
    while (headA != headB)
    {
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
}