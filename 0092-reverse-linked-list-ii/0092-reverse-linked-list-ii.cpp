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
    ListNode* reverseLL(ListNode* &left1){
        ListNode* curr=left1;

        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }

        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // edge cases 
        


        ListNode* first=NULL;
        ListNode* left1=head;

        int pos=left;
        while(pos!=1){
            first=left1;
            left1=left1->next;
            pos--;
        }
        int pos2=right;
        ListNode* right2=head;
        while(pos2!=1){
            right2=right2->next;
            pos2--;
        }
        ListNode* second=right2->next;
        if(first!=NULL) first->next=NULL;
        right2->next=NULL;


        right2=reverseLL(left1);
        if(first!=NULL) first->next=right2;
        if(second!=NULL) left1->next=second;
        if(first==NULL) return right2;

        return head;

    }
};