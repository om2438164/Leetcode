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

    ListNode* findmiddle(ListNode* &head){
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            
        }
        return slow;
    }

    ListNode* reverseLL(ListNode* &head2){
        ListNode* prev=NULL;
        ListNode* curr=head2;
        while(curr!=NULL){
            ListNode* forword=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forword;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        //find middle
        ListNode* middle=findmiddle(head);

        //create two ll
        ListNode* head2=middle->next;
        middle->next=NULL;

        // reverse second ll
        head2=reverseLL(head2);

        // compare
        while(head!=NULL && head2!=NULL){
            if(head->val!=head2->val) return false;
            head=head->next;
            head2=head2->next;
        }
        return true;
    }
};