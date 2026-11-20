class Solution {
public:
ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre = NULL;
        while(curr != NULL){
                ListNode* fwd = curr->next;
                curr->next = pre;
                pre = curr;
                curr = fwd;
        }
      return pre;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        // reach the left middle element 
        while(fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        b = reverse(b);
        ListNode* t1 = a;
        ListNode* t2 = b;
        ListNode * dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(t1 != NULL){
            temp->next = t1;
            temp = temp->next;
            t1 = t1->next;

            temp->next = t2;
            temp = temp->next;
            if(t2 != NULL) t2 = t2->next;

        }
    }
};