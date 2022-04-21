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
        rootnode = new TreeNode();
        currnode = rootnode;
        inorder(root);
        // pointer = rootnode;
        
        return rootnode -> right;
    }
    
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        
        inorder(root -> left);
        
        root -> left = NULL;
        currnode -> right = root;
        currnode = root;
        
        inorder(root -> right);
    }
    
private:
    TreeNode* rootnode = NULL;
    TreeNode * currnode = NULL;
};