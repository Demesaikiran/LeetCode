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
   
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        
        queue<pair<TreeNode*, pair<int, int>>> rem_nodes;
        
        rem_nodes.push({root, {0, 0}});
        
        while(! rem_nodes.empty())
        {
            auto temp = rem_nodes.front();
            rem_nodes.pop();
            
            TreeNode* node = temp.first;
            
            int x = temp.second.first, y = temp.second.second;
            
            nodes[x][y].insert(node -> val);
            
            if(node -> left)
                rem_nodes.push({node -> left, {x - 1, y + 1}});
            if(node -> right)
                rem_nodes.push({node -> right, {x + 1, y + 1}});
        }
        
        vector<vector<int>> result;
        
        for(auto temp: nodes)
        {
            vector<int> vertical;
            for(auto i: temp.second)
                vertical.insert(vertical.end(), i.second.begin(), i.second.end());
            result.push_back(vertical);
        }
        return result;
    }
};