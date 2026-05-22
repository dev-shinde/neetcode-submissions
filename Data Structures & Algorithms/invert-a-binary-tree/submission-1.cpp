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
        //how will you invert a binary tree how will you do it, lets see ; 
        //whats the base intution how will you solve it, tell me ; 
        //from what we know is that in memory, its already written when we pass root, it knows what is left and what is right,
        //now what we need to do is swap, the left and right
        //after root you swapped left and right 
        //and once you swapped left and right you will swap ; you will also swap left and right of that resepective parent
        


        if (!root) return nullptr;    // ← fix: not [], use nullptr

        swap(root->left, root->right);

// now just call yourself on both children
        invertTree(root->left);
        invertTree(root->right);

        return root;

        //now i know we need to swap also below it ; and there is something i am forgetting ;; 

        //and i also think it can be done inline as in we need to swap the TreeNode inside it else changes woudnt be reflected in the output ; or now we create a new vector and return it and push the swapped element.
        //but how do we do it ; is it like a for loop treenode size or something else,
        //i am stuck in the code implemetation
    }
};
