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

    void insertAttail(ListNode* &head,ListNode* &tail,int data){
        ListNode* temp=new ListNode(data);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        ListNode* tail=NULL;

        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL || carry>0){
            int sum=carry;
            if(temp1!=NULL) sum+=temp1->val;

            if(temp2!=NULL) sum+=temp2->val;

            insertAttail(head,tail,sum%10);
            carry=sum/10;
            if(temp1!=NULL) temp1=temp1->next;
            if(temp2!=NULL) temp2=temp2->next;
        }
        return head;
    }
};