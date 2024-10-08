/**  876. Middle of the Linked List

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
        
        ListNode* current = head;
    	int longList = 0;

        while(current){
            longList++;
            current = current -> next;
        }

        current = head;
        
        int middle = (longList / 2);
        
        while(middle--){
            current = current -> next;
        }

        return current;
    }
};