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
    ListNode* reverseLL(ListNode* &head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }
        return prev;

    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverseLL(head);
        ListNode* sample=temp;
        int carry=0;
        ListNode* prev=NULL;
        while(temp!=NULL){
            int mul=(temp->val)*2;
            mul+=carry;
            temp->val=mul%10;
            carry=mul/10;
            prev=temp;
            temp=temp->next;
        }
        if(carry){
            ListNode* extracarry=new ListNode(carry);
            prev->next=extracarry;
        }
        head=reverseLL(sample);
        return head;
    }
};