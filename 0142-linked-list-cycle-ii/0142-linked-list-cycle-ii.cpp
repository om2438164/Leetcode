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
        unordered_map<ListNode*,int>map;
        // ListNode* fast=head;
        // ListNode* slow=head;

        // while(fast!=NULL){
        //     fast=fast->next;
        //     if(fast!=NULL){
        //         fast=fast->next;
        //         slow=slow->next;
        //     }
        // }

        ListNode* temp=head;
        while(temp!=NULL){
            if(map.count(temp)){
                return temp;
            }
            map[temp]++;
            temp=temp->next;
        }
        return NULL;
    }
};