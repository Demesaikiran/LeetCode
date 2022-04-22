/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * travel = head;
        
        if(head == NULL) return head;
        
        int countNodes = 0;
        
        while(travel) {
            travel = travel -> next;
            countNodes++;
        }
        cout << countNodes;
        
        // This is base-condition-1 saying to remove the first node.
        // It also covers the condition if there is only one ele in the list
        if(countNodes == n) head = head -> next;
        else {
            travel = head;
            for(int i = 0; i < countNodes - n - 1; i++)
                travel = travel -> next;

            travel -> next = travel -> next -> next;
        }
        return head;
    }
};