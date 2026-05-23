/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        //so here we are trying to find the height of it.

        //maybe i can solve it 

        //we need to record the distance from root.

        if (!root) return 0;
        int depth = max(maxDepth(root->left),maxDepth(root->right));
        return 1+depth;        
    }
};
