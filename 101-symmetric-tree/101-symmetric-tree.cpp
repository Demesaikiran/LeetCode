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
    bool isSymCheck(TreeNode* root1, TreeNode* root2){
        
        if(root1 == NULL and root2 == NULL) return true;
        if(root1 == NULL or root2 == NULL) return false;
        
        if(root1 -> val != root2 -> val) return false;
        
        return isSymCheck(root1 -> left, root2 -> right) and 
               isSymCheck(root1 -> right, root2 -> left);
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        
        return isSymCheck(root, root);
        
    }
};