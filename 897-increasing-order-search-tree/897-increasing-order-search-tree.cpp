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
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        // pointer = rootnode;
        
        return rootnode;
    }
    
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        
        inorder(root -> left);
        
        if(rootnode == NULL) 
        {
            rootnode = new TreeNode(root -> val);
            pointer =  new TreeNode();
            pointer = rootnode;
        }
        else
        {
            TreeNode* node = new TreeNode(root -> val);
            pointer -> right = node;
            pointer = pointer -> right;
        }
        
        inorder(root -> right);
    }
    
private:
    TreeNode* rootnode = NULL;
    TreeNode * pointer = NULL;
};