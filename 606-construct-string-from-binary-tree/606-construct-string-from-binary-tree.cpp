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
private:
    string result= "";
    
public:
    
    void preorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        result += ("("+to_string(root -> val));
        
        if(root -> left == NULL)
            if(root -> right == NULL)
            {
                result += ")";
                    return;
            }
            else
                result += "()";
        else
            tree2str(root -> left);
        
        tree2str(root -> right);
        result += ")";
    }
    
    string tree2str(TreeNode* root) {
        
        preorder(root);
        
        return result.substr(1, result.size() - 2);

    }
};