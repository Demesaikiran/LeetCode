/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> result;
        vector<int> temp;
        
        if(! root)
            return result;
        
        queue<Node *> remain_nodes;
        
        remain_nodes.push(root);
        
        while(!remain_nodes.empty())
        {
            int n = remain_nodes.size();
            
            for(int i = 0; i < n; i++)
            {
                Node * current = remain_nodes.front();
                remain_nodes.pop();
                temp.push_back(current -> val);
                
                for(auto node : current -> children)
                    remain_nodes.push(node);
                
            }
            result.push_back(temp);
            temp.clear();
        }
        
        return result;
    }
        
        
        
        
        
};