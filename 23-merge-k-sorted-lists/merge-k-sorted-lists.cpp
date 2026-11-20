class Solution {
public:
ListNode* merge(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
         if(list2 == NULL) return list1;

        ListNode* dummy = new ListNode(-1);
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* k = dummy;
        while(i != NULL && j != NULL){
            if(i->val <= j->val){
                k->next = i;
                i = i->next;
                k = k->next;
                
            }
            else{
                k->next = j;
                j = j->next;
                k = k->next;
            }
            if(i == NULL) k->next = j;
            else k->next = i;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size() == 0) return NULL;
        while(arr.size() > 1){
            ListNode* a = arr[arr.size()-1];
            arr.pop_back();
            ListNode* b = arr[arr.size()-1];
            arr.pop_back();
            ListNode* c = merge(a,b);
            arr.push_back(c);
        }
        return arr[0];
    }
};