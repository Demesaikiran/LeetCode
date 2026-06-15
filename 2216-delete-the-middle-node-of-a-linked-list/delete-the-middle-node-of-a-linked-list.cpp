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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = new ListNode(0, head);
        ListNode* slowPtr = temp;
        ListNode* fastPtr = head;

        while(fastPtr != nullptr && fastPtr->next != nullptr)
        {
            slowPtr = slowPtr -> next;
            fastPtr = fastPtr -> next -> next;
        }

        slowPtr -> next = slowPtr -> next -> next;

        return temp -> next;
    }
};