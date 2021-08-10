/*
 * maxDepth.cpp
 * Arcodeo Solution
 * LeetCode Problem 104
 */

#include "maxDepth.h"
#include <queue>
using namespace std;

    int maxDepth(TreeNode* root) {
        int depth = 0;
        if(!root) return depth;
        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty()){
            ++depth;
            size_t n = bfs.size();
            for(size_t i = 0; i < n; ++i){
                TreeNode* curr = bfs.front();
                bfs.pop();
                if(curr->left)
                    bfs.push(curr->left);
                if(curr->right)
                    bfs.push(curr->right);
            }
        }
        return depth;
    }