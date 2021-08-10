/*
 * hasCycle.cpp
 * Arcodeo Solution
 * LeetCode Problem 141
 */

#include <iostream>

#include "hasCycle.h"

using namespace std;

bool hasCycle(ListNode *head)
{
    // if size == 0 || size == 1 return false
    if (head == nullptr || head->next == nullptr)
        return false;
    // Declare slow and fast pointers
    ListNode *slow = head, *fast = head;
    // While fast has spaces to move increment fast by 2 and slow by 1 fast will double lap 1
    // if not fast will reach the end of the track meaning no loops
    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return true;
    }
    return false;
}

// Testing Purposes:

// int main()
// {
//     ListNode head(1), two(2), three(3), four(4), five(5), six(6), seven(7), eight(8);
//     head.next = &two;
//     two.next = &three;
//     three.next = &four;
//     four.next = &five;
//     five.next = &six;
//     six.next = &seven;
//     seven.next = &eight;
//     eight.next = &three;
//     (hasCycle(&head)) ? cout << "Has Cycle\n" : cout << "No Cycles\n";
// }