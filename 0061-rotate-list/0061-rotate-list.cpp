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
    int getlen(ListNode* &head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int len=getlen(head);
        k=k%len;
        if(k==0) return head;
        int pos=len-k;

        ListNode* head2=head;
        ListNode* temp=head;
        while(pos!=1){
            temp=temp->next;
            pos--;
        }
        ListNode* curr=temp->next;
        temp->next=NULL;
        head=curr;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=head2;
        return head;

    }
};