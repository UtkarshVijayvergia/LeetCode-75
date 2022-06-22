class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* next_node = NULL;
        ListNode* prev_node = NULL;
        ListNode* curr_node = head;

        while(curr_node !=NULL){
            next_node = curr_node->next;
            curr_node->next = prev_node;
            prev_node = curr_node;
            curr_node = next_node;
        }
        head = prev_node;
        return head;
    }
};
