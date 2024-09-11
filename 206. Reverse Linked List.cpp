/*206. Reverse Linked List*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* current = head;
        ListNode* aux = head;
        ListNode* ant = NULL;

        while(current){

            if(current -> next == NULL){
                head = current;
            }
            aux = current -> next;
            current -> next = ant;
            ant = current;
            current = aux;
        }

        return head;

    }
};