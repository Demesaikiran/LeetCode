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
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double> result;
        
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty())
        {
            queue<TreeNode*> temp;
            double sum = 0;
            int count = 0;
            
            while(!q.empty())
            {
                count++;
                
                TreeNode* tempnode = q.front();
                q.pop();
                
                sum += tempnode -> val;
                if(tempnode -> left)
                    temp.push(tempnode -> left);
                if(tempnode -> right)
                    temp.push(tempnode -> right);
                
            }
            q = temp;
            result.push_back(sum / count);
        }
        
        return result;
    }
};