class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        // edge testcase
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        
        ListNode* curr = head1;
        if(head1->val > head2->val){
            curr = head2;
            head2 = head2->next;
        }  
        else{
            head1 = head1->next;
        }
        ListNode* newHead = curr;
        
        while(head1!=NULL && head2!=NULL){
            if(head1->val >= head2->val){
                curr->next = head2;
                curr = curr->next;
                head2 = head2->next;
                // cout<<curr->val<<endl;
            }
            else if(head1->val < head2->val){
                curr->next = head1;
                curr = curr->next;
                head1 = head1->next;
                // cout<<curr->val<<endl;
            }
        }
        if(head1){
            curr->next = head1;
        }
        if(head2){
            curr->next = head2;
        }
        
        return newHead;
    }
};
