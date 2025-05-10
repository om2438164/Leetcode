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

    ListNode* getmiddle(ListNode* &head){
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }

    ListNode* reverseLL(ListNode* &middle){
        ListNode* prev=NULL;
        ListNode* curr=middle;
        while(curr!=NULL){
            ListNode* forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }
        return prev;
    }


    void reorderList(ListNode* head) {
        //finding middle and breaking from middle
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                prev=slow;
                slow=slow->next;
            }
        }

        if(prev==NULL) return;
        prev->next=NULL;
        ListNode* middle=slow;

        //reverse second LL
        ListNode* temp2=reverseLL(middle);

        //connect node alternatively
        ListNode* temp1=head;
        ListNode* curr1=temp1->next;
        ListNode* curr2=temp2->next;
        while(temp1!=NULL && temp2!=NULL){
                temp1->next=temp2;
                temp1=curr1;
            
            if(temp1!=NULL){
                temp2->next=temp1;
                temp2=curr2;
            } 

            if(temp1!=NULL){
                curr1=temp1->next;
            }
            if(temp2!=NULL){
                curr2=temp2->next;
            }
        }

        if(temp1==NULL){
            while(curr2!=NULL){
                temp2->next=curr2;
                temp2=curr2;
                curr2=curr2->next;
            }
        }

        if(temp2==NULL){
            while(curr1!=NULL){
                temp1->next=curr1;
                temp1=curr1;
                curr1=curr1->next;
            }
        }


    }
};