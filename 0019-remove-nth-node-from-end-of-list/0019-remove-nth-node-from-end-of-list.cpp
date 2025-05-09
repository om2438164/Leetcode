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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getlen(head);
        int pos=(len-n)+1;

        if (pos==1){
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }


        ListNode* prev=NULL;
        ListNode* curr=head;
        while(pos!=1){
            prev=curr;
            curr=curr->next;
            pos--;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

        return head;
        
    }
};