/*
 * increasingBST.h
 * Arcodeo Solution
 * LeetCode Problem 897
 */
#ifndef INCREASINGBST_H
#define INCREASINGBST_H

#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *increasingBST(TreeNode *root);
#endif