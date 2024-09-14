/** 203. Remove Linked List Elements.cpp
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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* current = head;
        ListNode* ant = head;
    
        while(current){

            // if(current -> next != NULL and current-> next -> val == val)
            //     current -> next = current -> next -> next;
            if(current == head and current -> val == val){
                head = current -> next;
                current = head;
                ant = head;
                continue;
            }

            if(current -> val == val){
                ant -> next = current -> next;
            }
            else{
                ant = current;
            }
            
            current = current -> next;
        }

        return head;
        
    }
};