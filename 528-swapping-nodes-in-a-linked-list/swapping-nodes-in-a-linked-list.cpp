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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* temp = head;
       ListNode* n = head;
        int x;
       int length = 0;
       while(temp != NULL){
        temp = temp->next;
        length++;
       }
       temp = head;
       for(int i=1;i<k;i++){
            temp = temp->next;
       }
       for(int i=1;i<=length-k;i++){
            n = n->next;
       }
        // Swapping 
        x = temp->val;
        temp->val = n->val;
        n->val = x;

        return head;
    }
};