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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* ans = head->next;
       ListNode* a = head;
       ListNode* pre = NULL;
       while(a != NULL){
        ListNode* b = a->next;
            if(b == NULL){
                pre->next = a;
                break;
            }
            ListNode* fwd = b->next;
            b->next = a;
            if(pre != NULL) pre->next = b;
            else head = b;
            pre = a;
            a->next = NULL;
            a = fwd;

       }
       return ans;

    }
};