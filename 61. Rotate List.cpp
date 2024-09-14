/** 61. Rotate List.cpp
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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* current = head;
        ListNode* last = NULL;
        ListNode* nvoHead = NULL;
        ListNode* nvoLast = NULL;
        int sizeList = 0;
        int aux = 0;

        while(current){

            sizeList++;
            current = current -> next;
            
            if(current != NULL)
                last = current;
        }

        if(k == 0 or head == NULL or k%sizeList == 0)
            return head;

        k %= sizeList;
        aux = sizeList - k;
        current = head; 

        while(current){
            if(aux == 1)
                nvoLast = current;
            
            if(aux == 0){
                nvoHead = current;
                break;
            }
        
            aux--;
            current = current -> next;
        }

        last -> next = head;
        nvoLast -> next = NULL;
        head = nvoHead;

        return head;

    }
};