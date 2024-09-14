/** 1290. Convert Binary Number in a Linked List to Integer.cpp
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
    int getDecimalValue(ListNode* head) {
        
        ListNode* current = head;
        int pot = 0;
        int decimal = 0;

        while(current){
            pot++;
            current = current -> next;
        }

        current = head;
        pot--;

        while(current){
            
            if(current -> val == 1)
                decimal += (pow(2, pot));
            
            current = current -> next;
            pot--;
        }

        return decimal;
    }
};