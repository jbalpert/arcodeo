/*
 * LinkedListBinarytoInt.cpp
 * Arcodeo Solution
 * LeetCode Problem 1290
 */

#include "LinkedListBinarytoInt.h"

int getDecimalValue(ListNode *head)
{
    int i = 0;
    while (head)
    {
        i <<= 1;
        i |= head->val;
        head = head->next;
    }
    return i;
}
