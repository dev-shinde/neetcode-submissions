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
        //here i myself dont know how to invert a tree, but thats okay ; 
        //for a computer whats a tree, you never understood the tree
        //and thats true, i know i need to do some type of recusrion exchange in here ; as in what here will happen is ; we have set some method through which recursion of left and right is working and that we will modify iteratively 
        //if i am thinking correct ; where left was there ; we will try to modify it to right ; and where right is there we will try to modify it to left ; and accordingly works towards it ; lets get started  
        // do one thing dev ; just play to loose 
        if (root == nullptr)
        {
            return nullptr;
        }
        swap(root->left,root->right);
        invertTree(root->left);
        //i am assuming if i will write this it will assume its root its left element and that will call its root as left element ; and will swap that left elements furter left and right element if they were not nulll
        invertTree(root->right);
        //same way it will call all the right element and swap them my only concern if right will call its left and right elements and swap them wont things become kind of the same because the already left and right element are already swapped and then we will again swap them
        //it is also possible i understood things wrong
        return root;
    }
};
