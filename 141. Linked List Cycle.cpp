/*141. Linked List Cycle*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        bool ans = false;
        set <ListNode*> nodes;

        while(head){

            if(!nodes.empty()){
                if(nodes.count(head)){
                    ans = true;
                    break;
                }
            }
            
            nodes.insert(head);
            head = head -> next;
        }

        return ans;
    }
};