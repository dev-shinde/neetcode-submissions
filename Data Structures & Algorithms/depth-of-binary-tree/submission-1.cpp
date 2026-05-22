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
        //here one way is to do bfs ; calculating all the breathe and retruning it
        //and another is dfs, what we want to do it until there is left and right do+1 ;

        if (root == nullptr) {
            return 0;
        }
        
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
