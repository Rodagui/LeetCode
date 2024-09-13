/** 160. Intersection of Two Linked Lists 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int sizeList(ListNode *head) {
        int sizeList = 0;
        
        while (head) {
            sizeList++;
            head = head->next;
        }
        
        return sizeList;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int sizeA = sizeList(headA);
        int sizeB = sizeList(headB);
        ListNode* ans = NULL;
        int dif;

        if(sizeA == sizeB){

            while(headA){
                if(headA == headB)
                    return headA;

                headA = headA -> next;
                headB = headB -> next;
            }
        }
        else{

            if(sizeA > sizeB){
                dif = sizeA - sizeB;

                while(dif--){
                    headA = headA -> next;
                }
            }
            else{
                dif = sizeB - sizeA;
                while(dif--){
                    headB = headB -> next;
                }
            }

            while(headA){
                if(headA == headB)
                    return headA;

                headA = headA -> next;
                headB = headB -> next;
            }

        }

        return ans;

    }
};