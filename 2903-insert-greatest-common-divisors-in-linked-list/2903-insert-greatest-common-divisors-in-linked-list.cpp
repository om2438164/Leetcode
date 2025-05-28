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
    int getgcd(int &a,int &b){
        if(a==0) return b;
        if(b==0) return a;

        if(a>b) a=a-b;
        else b=b-a;
        return getgcd(a,b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first=head;
        ListNode* last=head->next;
        while(last!=NULL){
            int a=first->val;
            int b=last->val;
            int data=getgcd(a,b);
            ListNode* newnode=new ListNode(data);
            newnode->next=last;
            first->next=newnode;
            first=last;
            last=last->next;
        }
        return head;
    }
};