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
        ListNode*start=head;
        ListNode*end=head;
        
        while(start!= NULL && end!=NULL && end->next!=NULL){
            start=start->next;
            end=end->next->next;
            if(start==end) break;
        }
        if(end==NULL || end->next==NULL) return NULL;
        ListNode* ptr=head;
        
        while(ptr!=start){
            ptr=ptr->next;
            start= start->next;
            if(ptr==start) break;
        }
        return ptr;
    }
};