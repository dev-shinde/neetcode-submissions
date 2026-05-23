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
    TreeNode* invertTree(TreeNode* root) {
        //Ideally i should be able to solve it ;
        //remeber the golden rule, always remember recursion in mind, to solve any graph and tree question ; 
        //why do we use it, so that we can divide the problem into smaller problems and solve it.

        if (!root) return nullptr;

        swap(root->left,root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
