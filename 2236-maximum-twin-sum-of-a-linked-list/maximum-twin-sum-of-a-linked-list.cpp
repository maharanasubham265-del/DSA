
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
    int pairSum(ListNode* head) {
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
        int sum;
        int maxsum = 0;
        while(t1 != NULL){
            sum = t1->val + t2->val;
            t1= t1->next;
            t2= t2->next;
            if(maxsum < sum){
                maxsum = sum;
            }
        }
        return maxsum;
        
    }  
};