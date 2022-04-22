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
    vector<int> preorder(Node* root) {
        
        nary_preorder(root);
        return result;
        
    }
    
    void nary_preorder(Node* root) {
        
        if(root == NULL) return;
        
        result.push_back(root -> val);
        
        for(int i = 0; i < (root -> children).size(); i++)
            nary_preorder((root -> children)[i]);
        
        
    }
    
private:
    vector<int> result;
};