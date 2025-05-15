/**
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
        if(head==NULL) return head;
        ListNode* head1=head;
        ListNode* head2=NULL;
        if(head->next!=NULL){
            head2=head->next;
        }
        ListNode* temp=head2;
        ListNode* curr=NULL;
        if(head2==NULL) return head;
        if(head2->next!=NULL){
            curr=head2->next;
        }
        if(curr==NULL) return head;

        while(curr!=NULL){
            head1->next=curr;
            head1=curr;
            curr=curr->next;
            if(curr!=NULL){
                head2->next=curr;
                head2=curr;
                curr=curr->next;
            }
        }
        head1->next=temp;
        head2->next=NULL;
        return head;
    }
};