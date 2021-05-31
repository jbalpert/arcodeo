/*
 * LinkedListBinarytoInt.h
 * Arcodeo Solution
 * LeetCode Problem 1290
 */
#ifndef BINARYTOINT_H
#define BINARYTOINT_H

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode *head);
#endif