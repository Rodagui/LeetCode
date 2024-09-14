/** 19. Remove Nth Node From End of List.cpp
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int nodes = 0;

        while(current){
            nodes++;
            current = current -> next;
        }

        if(nodes == 1){
            head = NULL;
            return head;
        }

        current = head;
        nodes -= n;

        if(nodes == 0){
            head = head -> next;
            return head;
        }
    
        while(current){

            if(nodes == 1){
                current -> next = current -> next ->next;
                break;
            }

            nodes--;
            current = current -> next;
        }

        return head;
    }
};