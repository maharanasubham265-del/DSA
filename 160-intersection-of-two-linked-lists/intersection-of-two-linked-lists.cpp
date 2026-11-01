/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* head1, ListNode* head2) {
        ListNode* temp1 = head1;
        int length1 = 0;
        while(temp1 != NULL){
            temp1 = temp1->next;
            length1++;
        } 
        ListNode* temp2 = head2;
        int length2 = 0;
        while(temp2 != NULL){
            temp2 = temp2->next;
            length2++;
        } 

        temp1 = head1;
        temp2 = head2;

        if(length1 > length2){
            for(int i=1;i<=length1-length2;i++){
                temp1 = temp1->next;
            }
        }
        else{
            for(int i=1;i<=length2-length1;i++){
                temp2 = temp2->next;
            }
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1;



    }
};