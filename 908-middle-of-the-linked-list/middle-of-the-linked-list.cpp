class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int length = 0;
//         ListNode* i = head;
//         while(i != NULL){
//             i = i->next;
//             length++;
//         }
//         int n = length/2;
//         i=head;

//         for(int j=1;j<=n;j++){
//             i = i->next;
//         }

//         return i;

//     }
// };