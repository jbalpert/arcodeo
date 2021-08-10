/*
 * isSymmetric_iterative.cpp
 * Arcodeo Solution
 * LeetCode Problem 101
 */

#include "isSymmetric.h"
#include <queue>
using namespace std;

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> bfs;
        bfs.push(root->left);
        bfs.push(root->right);
        while(!bfs.empty()){
            TreeNode* leftSub = bfs.front();
            bfs.pop();
            TreeNode* rightSub = bfs.front();
            bfs.pop();
            if(!leftSub && !rightSub) continue;
            if((leftSub && !rightSub) || (!leftSub && rightSub)) return false;
            if(leftSub->val != rightSub->val) return false;
            bfs.push(leftSub->left);
            bfs.push(rightSub->right);
            bfs.push(leftSub->right);
            bfs.push(rightSub->left);
        }
        return true;
    }