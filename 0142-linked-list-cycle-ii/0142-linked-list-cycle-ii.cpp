/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        //with extra space hashmap
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     if(map.count(temp)){
        //         return temp;
        //     }
        //     map[temp]++;
        //     temp=temp->next;
        // }
        // return NULL;


        // using slow and faster pointer
        ListNode* fast=head;
        ListNode* slow=head;
        bool check=false;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(slow==fast) {
                check=true;
                break;
            }
        }

        if(!check) return NULL;

        slow=head;

        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;


        
    }
};