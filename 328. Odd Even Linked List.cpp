/** 328. Odd Even Linked List.cpp
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
    ListNode* oddEvenList(ListNode* head) {

        ListNode* current = head;
        ListNode* lastOdd = head;
        ListNode* lastEven = NULL;
        ListNode* headEven = NULL;
        ListNode* next = NULL;

        int nodes = 0;
        int aux = 0;

        while(current){
            nodes++;
            current = current -> next;
        }

        if(nodes == 0 or nodes == 1 or nodes == 2)
            return head;

        else{

            current = head -> next -> next;
            headEven = head -> next;
            lastOdd = head;
            lastEven = headEven;
            lastEven -> next = NULL;
            
            aux = 3;

            while(current){

                next = current -> next;

                if(aux % 2 == 1){
                    lastOdd -> next = current;
                    lastOdd = current;
                    lastOdd -> next = NULL;
                    
                }
                else{
                    lastEven -> next = current;
                    lastEven = current;
                    lastEven -> next = NULL;
                }

                aux++; 
                current = next;
            }

            lastOdd -> next = headEven;
        }
        
        return head;
    }
};