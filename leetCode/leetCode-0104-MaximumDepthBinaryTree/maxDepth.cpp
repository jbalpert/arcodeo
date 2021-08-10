/*
 * maxDepth.cpp
 * Arcodeo Solution
 * LeetCode Problem 104
 */

#include "maxDepth.h"
#include <algorithm>
using namespace std;

int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}