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
    void insertAttail(ListNode* &head2,ListNode* &tail,int &data){
        ListNode* temp2=new ListNode(data);
        if(head2==NULL){
            head2=temp2;
            tail=temp2;
            return;
        }
        tail->next=temp2;
        tail=temp2;
    }
   
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* head2=NULL;
        ListNode* tail=NULL;
        unordered_map<int,int>map;

        ListNode* temp=head;
        while(temp!=NULL){
            map[temp->val]++;
            temp=temp->next;
        }
        
        temp=head;
        while(temp!=NULL){
            if(map[temp->val]==1){
                insertAttail(head2,tail,temp->val);
            }
            temp=temp->next;
        }
        
        return head2;
    }
};