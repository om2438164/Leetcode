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
    bool hasCycle(ListNode *head) {
        // unordered_map<ListNode*,int>map;

        // ListNode* temp=head;
        // while(temp!=NULL){
        //     if(map.count(temp)){
        //         return true;
        //     }else{
        //         map[temp]++;
        //         temp=temp->next;
        //     }
        // }
        // return false;

        ListNode* fast=head;
        ListNode* slow=head;

        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow) return true;
        }

        return false;


        
    }
};