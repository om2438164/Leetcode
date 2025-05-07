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
    // int getlen(ListNode* &head){
    //     ListNode* temp=head;
    //     int count=0;
    //     while(temp!=NULL){
    //         temp=temp->next;
    //         count++;
    //     }
    //     return count;
    // }

    ListNode* middleNode(ListNode* head) {
        // using double traversal, finding length and ans
        // int len=getlen(head);
        // int pos=(len/2)+1;

        // ListNode* temp=head;
        // while(pos!=1){
        //     temp=temp->next;
        //     pos--;
        // }
        // return temp;




        // using fast and slow pointer
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};