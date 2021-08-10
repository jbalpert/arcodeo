/*
 * maxDepth.h
 * Arcodeo Solution
 * LeetCode Problem 104
 */
#ifndef MAXDEPTH_H
#define MAXDEPTH_H

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

    int maxDepth(TreeNode* root);
#endif