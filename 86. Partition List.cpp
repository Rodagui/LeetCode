/** 86. Partition List
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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* headLess = NULL;
        ListNode* lastLess = NULL;
        ListNode* headGreater = NULL;
        ListNode* lastGreater = NULL;
        ListNode* current = head;
        ListNode* next = NULL;

        while(current){
            
            next = current -> next;

            if(current -> val < x){

                if(headLess == NULL){
                    headLess = current;
                    lastLess = current;
                    lastLess -> next = NULL;
                }
                else{
                    lastLess -> next = current;
                    lastLess = current;
                    lastLess -> next = NULL;
                }
            }
            else{

                if(headGreater == NULL){
                    headGreater = current;
                    lastGreater = current;
                    lastGreater -> next = NULL;
                }
                else{
                    lastGreater -> next = current;
                    lastGreater = current;
                    lastGreater -> next = NULL;
                }

            }

            current = next;
        }

        if(headLess == NULL and headGreater != NULL)
            return headGreater;
        
        if(headLess != NULL and headGreater == NULL)
            return headLess;

        if(headLess == NULL and headGreater == NULL)
            return NULL;

        lastLess -> next = headGreater;

        return headLess;
    }
};