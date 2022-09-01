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
    int result;
    
    void dfs(TreeNode* node, int value)
    {
        if(!node)
            return;
        
        result += value <= node -> val;
        dfs(node -> left, max(value, node -> val));
        dfs(node -> right, max(value, node -> val));
    }
    int goodNodes(TreeNode* root) {
        result = 0;
        dfs(root, INT_MIN);
        return result;
    }
};