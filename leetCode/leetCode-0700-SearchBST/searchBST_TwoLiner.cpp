/*
 * searchBST_OneLine.cpp
 * Arcodeo Solution
 * LeetCode Problem 700
 */

#include "searchBST.h"
using namespace std;

TreeNode *searchBST(TreeNode *root, int val)
{
    while (root && root->val != val)
        root = (root->val < val) ? root->right : root->left;
    return root;
}