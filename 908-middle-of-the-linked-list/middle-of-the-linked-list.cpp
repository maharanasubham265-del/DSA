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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* i = head;
        while(i != NULL){
            i = i->next;
            length++;
        }
        int n = length/2;
        i=head;

        for(int j=1;j<=n;j++){
            i = i->next;
        }

        return i;

    }
};